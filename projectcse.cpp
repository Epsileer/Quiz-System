#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	
	ifstream fin,pin,gin;
	gin.open("introduction.txt");
	char cp[20],cz[20],cn=gin.get();int s=1;
	while(gin){
		cout<<cn;
			if(cn=='-' && s==2){
			cin>>cz;s++;
		}
		if(cn=='-' && s==1){
			gets(cp);s++;
		}
		cn=gin.get();
	}getch();
	pin.open("projectans.txt");
	fin.open("projectques.txt");
	int p=0,v=0,k[10];
	char ch,cg,cl;
	ch=fin.get();
	while(fin)
	{
		cout<<ch;
		if(ch=='~'){cl=pin.get();
			cout<<"\n\nAnswer=";
			cin>>cg;
			if((cg==cl || cg==cl+32)){
			p+=4;k[v]=1;v++;}
			else{		
			if(cg=='l' || cg=='L'){
				p=p+0;k[v]=0;v++;}
				else{
				if((cg!='l' || cg!='L'))
			p--;k[v]=-1;v++;}
			}
			
		}
		ch=fin.get();
	}
	fin.close();
	cout<<"\n\nhey "<<cp<<" you have scored "<<p<<" marks\n\n";
	cout<<"Press 'y' to see your answerboard\n";
	char q;cin>>q;
	if(q=='y' || q=='Y'){
    for(int l=0;l<10;l++){
    	if(k[l]==1)cout<<"ques : "<<(l+1)<<"  right +4\n";
    	if(k[l]==0)cout<<"ques : "<<(l+1)<<"  none  +0\n";
    	if(k[l]==-1)cout<<"ques : "<<(l+1)<<"  wrong -1\n";
    }}
}
