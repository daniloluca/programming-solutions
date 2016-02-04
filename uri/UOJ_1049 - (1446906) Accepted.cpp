#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	char a[15], b[15], c[15];
	fflush(stdin);
	cin.getline(a, 15);
	fflush(stdin);
	cin.getline(b, 15);
	fflush(stdin);
	cin.getline(c, 15);
	
	if(strcmp(a, "vertebrado")==0){
		if(strcmp(b, "ave")==0){
			if(strcmp(c, "carnivoro")==0)
				cout << "aguia" << endl;
			else
				cout << "pomba" << endl;
		}else{
			if(strcmp(c, "onivoro")==0)
				cout << "homem" << endl;
			else
				cout << "vaca" << endl;
		}		
	}else{
		if(strcmp(b, "inseto")==0){
			if(strcmp(c, "hematofago")==0)
				cout << "pulga" << endl;
			else
				cout << "lagarta" << endl;
		}else{
			if(strcmp(c, "hematofago")==0)
				cout << "sanguessuga" << endl;
			else
				cout << "minhoca" << endl;
		}
	}
}