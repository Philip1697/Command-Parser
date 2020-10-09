//============================================================================
// Name        : A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <cctype>
#include <string.h>
bool isnum(char *c){
	int k = 0;
	while(c[k]){
		if(isalpha(c[k])){
			return false;
		}
		k++;
	}
	return true;
}
int size(char *c){
	int k = 0;
	while(c[k]){
		k++;
	}
	return k;
}

	void print(int , char *[]);
	void reverse(int , char *[]);
	void upper(int , char *[]);
	void shuffle(int , char *[]);
	void shuffleStatement(int , char *[]);
	void Delete(int , char *[]);
	void middle(int , char *[]);
	void add(int , char *[]);
	void random(int , char *[]);

int main(int argc , char *argv[]) {

	if(argc < 2){
		cout<<"Incorrect Number of Arguments";
		return 0;
	}
	else if(!strcmp(argv[1],"print")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		print(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"reverse")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		reverse(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"upper")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		upper(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"shuffle")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		shuffle(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"shuffleStatement")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		shuffleStatement(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"delete")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		Delete(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"middle")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		middle(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"add")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		add(argc,argv);
		return 0;
	}
	else if(!strcmp(argv[1],"random")){
		if(argc < 3){
				cout<<"Incorrect Number of Arguments";
				return 0;
			}
		random(argc,argv);
		return 0;
	}
	else{
		cout<<"Undefined Command";
		return 0;
	}
	return 0;
}

void print(int argc , char *argv[]){
	for (int i = 2 ; i < argc ; i++){
		if(i == argc-1){
			cout<<argv[i];
		}
		else{
			cout<<argv[i]<<" ";
		}
	}
}
void reverse(int argc , char *argv[]){
	for (int i = argc-1 ; i > 1 ; i--){
		if(i == 2){
			cout<<argv[i];
		}
		else{
			cout<<argv[i]<<" ";
		}
	}
}
void upper(int argc , char *argv[]){
	for(int i = 2 ; i < argc ; i++){
		char *s = argv[i];
		for(int k = 0 ; k < size(s) ; k++){
			s[k] = toupper(s[k]);
		}
		if(i == argc-1){
			cout<<s;
		}
		else{
			cout<<s<<" ";
		}
	}
}

void shuffle(int argc , char *argv[]){
	if(argc>3){
		cout<<"Incorrect Number of Arguments";
		return;
	}
	char *s = argv[2];
	if(size(s)%2 == 1){
		for(int i = 0 ; i < size(s)-1 ; i = i + 2){
			char x = s[i];
			s[i] = s[i+1];
			s[i+1] = x;
		}
		cout<<s;
	}
	else{
		for(int i = 0 ; i < size(s) ; i = i + 2){
			char x = s[i];
			s[i] = s[i+1];
			s[i+1] = x;
		}
		cout<<s;
	}
}
void shuffleStatement(int argc , char *argv[]){
	char *s[argc-2];
	for(int i = 2 ; i < argc ; i++){
		s[i-2] = argv[i];
	}
		if((argc-2)%2 == 1){
			for(int k = 0 ; k < argc-3 ; k = k + 2){
				char *x = s[k];
				s[k] = s[k+1];
				s[k+1] = x;
			}
		}
		else{
			for(int k = 0 ; k < argc-2 ; k = k + 2){
				char *x = s[k];
				s[k] = s[k+1];
				s[k+1] = x;
			}
		}
		for(int i = 0 ; i < argc-2 ; i++){
			if(i == argc-3){
				cout<<s[i];
			}
			else{
				cout<<s[i]<<" ";
			}
		}
}
void Delete(int argc , char *argv[]){
	int x = 0;
	x = atoi(argv[2]);
	if(argc < 4){
		cout<<"Incorrect Number of Arguments";
		return;
	}
	if(x <= 0 || !isnum(argv[2])){
		cout<<"Incorrect Data Type";
		return ;
	}
	if(x > argc-3){
		cout<<"Incorrect Number of Arguments";
		return ;
	}
	for(int i = 3 ; i < argc ; i++){
		if(i-2 != x){
			if(i == argc-1){
				cout<<argv[i];
			}
			else{
				cout<<argv[i]<<" ";
			}
		}
	}
}
void middle(int argc , char *argv[]){
	if((argc-2)%2 == 1){
		cout<<argv[(argc+1)/2];
	}
	else{
		cout<<argv[argc/2]<<" "<<argv[(argc+2)/2];
	}
}
void add(int argc , char *argv[]){
	int x = 0 , y = 0;
	for(int i = 2 ; i < argc ; i++){
		x = atoi(argv[i]);
		if(!isnum(argv[i])){
			cout<<"Incorrect Data Type";
			return;
		}
		else{
		y = y + x;
	}
	}
	cout<<y;
}
void random(int argc , char *argv[]){
	if(argc != 6){
		cout<<"Incorrect Number of Arguments";
		return;
	}
	for(int i = 2 ; i < argc ; i++){
		if(!isnum(argv[i]) || atoi(argv[4]) < atoi(argv[3])){
			cout<<"Incorrect Data Type";
			return;
		}
	}
	if(atoi(argv[2]) <= 0){
		cout<<"Incorrect Data Type";
		return;
	}
	srand(atoi(argv[5]));
	for(int i = 0 ; i < atoi(argv[2]) ; i++){
		int k = rand() % atoi(argv[4]) + atoi(argv[3]);
		if(i == atoi(argv[2])-1){
			cout<<k;
		}
		else{
			cout<<k<<" ";
		}
	}
}
