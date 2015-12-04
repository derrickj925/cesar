#include<iostream>
#include<string>
using namespace std;

/*
Preconditions:none
functionality:allows the user to enter an amount to shift(n) the alphabet.The program will then shift the program by n places.
The program will then display the new shifted alphabet along with the original alphabet.

Derrick Jann
*/


int main(){

	string cipherText;




	char alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	string foo = "abcdefghijklmnopqrstuvwxyz";
	int  alreadyPrintLetterQuestionMark[26];
	
	for(int y=0; y<26; y++){
		alreadyPrintLetterQuestionMark[y]=0;
	}


	int cipherLength=0;
	cout<<"enter the cipher text"<<endl;
	cin>>cipherText;

	cout<<endl<<endl; //formatting


	cipherLength = cipherText.length();


	int originalPosition[cipherLength];

	

	//get alphabet index for each letter in the ciphertext

		for(int a=0; a<cipherLength; a++){
			for(int s=0; s<26; s++){
				if(cipherText[a]==alphabet[s]){
					originalPosition[a]=s;

				}

			}



		}


	
		int shift=0;

		cout<<"how much would you like to shift? "<<endl;
		cin>>shift;

		char  newAlphabet[26];
	
	for(int y=0; y<26; y++){
		int temp=0;
		temp = y-shift;
		if(temp<0){

			temp = 26 + temp;
			newAlphabet[temp]=alphabet[y];

		}
		else{
			newAlphabet[temp]=alphabet[y];

		}


	}

	
		cout<<endl;
	

		for(int r=0;r<cipherLength;r++){

		cout<<newAlphabet[originalPosition[r]]<<" ";
	}
		cout<<endl;
	






		return 0;
	}





