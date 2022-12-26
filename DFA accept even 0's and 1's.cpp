#include <bits/stdc++.h>
using namespace std;
int state = 0;
// char c is the input that user enter
void q0(char c){
if(c=='0'){state = 1;}
else if (c=='1'){state=3;}
else{state =-1;}}
void q1(char c){
if(c=='0'){state = 0;}
else if (c=='1'){state=2;}
else{state =-1;}}
void q2(char c){
if(c=='0'){state = 3;}
else if (c=='1'){state=1;}
else{state =-1;}}
void q3(char c){
if(c=='0'){state = 2;}
else if (c=='1'){state=0;}
else{state =-1;}}


int Accpted(char str[]){
int len = strlen(str);
for(int i=0;i<len;i++){
    if(state==0){q0(str[i]);}
    else if(state==1){q1(str[i]);}
    else if(state==2){q2(str[i]);}
    else if(state==3){q3(str[i]);}

}
if(state==0){return true;}
else{return false;}
}

int main()
{
    char str[] = "1100";
    cout<<"The input string U enter is : "<<str <<endl;
    if(Accpted(str)){cout<<" Accepted ^_^ "<<endl;}
    else {cout<<" Rejected :( "<<endl;}
    return 0;
}
