#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct plot{
	char stones[7][9];
	int notfilled [9];
	int turn;
}plot4;
float def;
int bool1;
void intialize(plot &plotit){
	int i,j;
	for (i=0;i<6;i++){
		plotit.stones[i][0]=186;
		plotit.stones[i][8]=186;
	   for (j=1;j<8;j++)  plotit.stones[i][j]=' ';
}
    for (j=1;j<8;j++)
       plotit.stones[6][j]=205;
     plotit.stones[6][0]=200;
     plotit.stones[6][8]=188;
     
    for (j=0;j<9;j++)
       plotit.notfilled[j]=5;
     plotit.turn=0; }
     
void print(plot plotit){
	int i,j;
	for (i=0;i<50;i++)
		cout<< endl;
		cout <<"                         ";
		  for (j=1;j<8;j++) cout <<j<< "  ";
		  cout << endl<<endl;
	for (i=0;i<7;i++){
		cout <<"                      ";
	  for (j=0;j<9;j++) cout << plotit.stones[i][j]<< "  ";
	  cout<< endl<<endl;
	 
}}

void chance (int a,plot &plotit){
	a=a-48;
	if (a>0 &&a<8 && plotit.notfilled[a]>-1 ){
	if  (plotit.turn%2==bool1)
	plotit.stones[plotit.notfilled[a]][a]='0';
	else plotit.stones[plotit.notfilled[a]][a]='X';
	plotit.notfilled[a]--;
    plotit.turn++;} }
      
int check(plot plotit){
	int countx=0,count0=0,i,j;
	for (i=0;i<6;i++){
	  for (j=1;j<8;j++){
		  if (plotit.stones[i][j]=='X') countx++;
		  else countx=0;
		  if (countx==4) return 1;
		   if (plotit.stones[i][j]=='0') count0++;
		  else count0=0;
		  if (count0==4) return 2;}
		  countx=0;count0=0;}
	for (i=1;i<8;i++){
	  for (j=0;j<6;j++){
		  if (plotit.stones[j][i]=='X') countx++;
		  else countx=0;
		  if (countx==4) return 1;
		   if (plotit.stones[j][i]=='0') count0++;
		  else count0=0;
		  if (count0==4) return 2;}
		  countx=0;count0=0;
		  }
		  for (i=0;i<12;i++){
			  if (i<6)j=1; else j=i-5;
	        for (;j<i+2;j++){
		  if (plotit.stones[i+1-j][j]=='X') countx++;
		  else countx=0;
		  if (countx==4) return 1;
		   if (plotit.stones[i+1-j][j]=='0') count0++;
		  else count0=0;
		  if (count0==4) return 2;}
		  countx=0;count0=0;}
		  
		  
		  for (i=0;i<12;i++){
			  if (i<6)j=1; else j=i-5;
	        for (;j<i+2;j++){
		  if (plotit.stones[i+1-j][8-j]=='X') countx++;
		  else countx=0;
		  if (countx==4) return 1;
		   if (plotit.stones[i+1-j][8-j]=='0') count0++;
		  else count0=0;
		  if (count0==4) return 2;}
		  countx=0;count0=0;}
		  return 0;}
	
	void fill(plot &think4){
		int i,j;
		for (i=0;i<7;i++){
	  for (j=1;j<8;j++){if(think4.stones[i][j]==' ')
	  think4.stones[i][j]='o';}}}
			
int check2(plot plotit){
	int countx=0,counto=0,i,j,sum=0;
	for (i=0;i<6;i++){
	  for (j=1;j<8;j++){
		  if (plotit.stones[i][j]=='X'||plotit.stones[i][j]=='o' ) {counto++;
		  if (plotit.stones[i][j]=='X')countx+=4;
		  if (plotit.stones[i][j]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum=sum+1;
		   if (countx>4 && counto>=4) sum+=4;}
		  countx=0;counto=0;}
		  
		  
	for (i=1;i<8;i++){
	  for (j=0;j<6;j++){
		  if (plotit.stones[j][i]=='X'||plotit.stones[j][i]=='o') {counto++;
		   if (plotit.stones[j][i]=='X')countx+=4;
		  if (plotit.stones[j][i]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum+=1;
		  if (countx>4 && counto>=4) sum+=4;}
		  countx=0;counto=0;}
		  
		  for (i=0;i<12;i++){
			  if (i<6)j=1; else j=i-5;
	        for (;j<i+2;j++){
		  if (plotit.stones[i+1-j][j]=='X'||plotit.stones[i+1-j][j]=='o') {counto++;
		   if (plotit.stones[i+1-j][j]=='X')countx+=4;
		  if (plotit.stones[i+1-j][j]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum+=1;
		  if (countx>4 && counto>=4) sum+=4;}
		  countx=0;counto=0;}
		  
		  for (i=0;i<12;i++){
			  if (i<6)j=1; else j=i-5;
	        for (;j<i+2;j++){
		  if (plotit.stones[i+1-j][8-j]=='X'||plotit.stones[i+1-j][8-j]=='o') {counto++;
		   if (plotit.stones[i+1-j][8-j]=='X')countx+=4;
		  if (plotit.stones[i+1-j][8-j]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum+=1;
		  if (countx>4 && counto>=4) sum+=4;}
		  countx=0;counto=0;}
	
		  return sum;}
		  
		  
	
	
	
	int check3(plot plotit){
	int countx=0,counto=0,i,j,sum=0;
	for (i=0;i<6;i++){
	  for (j=1;j<8;j++){
		  if (plotit.stones[i][j]=='0'||plotit.stones[i][j]=='o' ) {counto++;
		  if (plotit.stones[i][j]=='0')countx+=4;
		  if (plotit.stones[i][j]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum=sum+1;
		   if (countx>4 && counto>=4) sum+=4;
		   if (countx>8 && counto>=4) sum+=2;}
		  countx=0;counto=0;}
		  
		  
	for (i=1;i<8;i++){
	  for (j=0;j<6;j++){
		  if (plotit.stones[j][i]=='0'||plotit.stones[j][i]=='o') {counto++;
		   if (plotit.stones[j][i]=='0')countx+=4;
		  if (plotit.stones[j][i]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum+=1;
		  if (countx>4 && counto>=4) sum+=4;
		  if (countx>8 && counto>=4) sum+=2;}
		  countx=0;counto=0;}
		  
		  for (i=0;i<12;i++){
			  if (i<6)j=1; else j=i-5;
	        for (;j<i+2;j++){
		  if (plotit.stones[i+1-j][j]=='0'||plotit.stones[i+1-j][j]=='o') {counto++;
		   if (plotit.stones[i+1-j][j]=='0')countx+=4;
		  if (plotit.stones[i+1-j][j]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum+=1;
		  if (countx>4 && counto>=4) sum+=4;
		  if (countx>8 && counto>=4) sum+=2;}
		  countx=0;counto=0;}
		  
		  for (i=0;i<12;i++){
			  if (i<6)j=1; else j=i-5;
	        for (;j<i+2;j++){
		  if (plotit.stones[i+1-j][8-j]=='0'||plotit.stones[i+1-j][8-j]=='o') {counto++;
		   if (plotit.stones[i+1-j][8-j]=='0')countx+=4;
		  if (plotit.stones[i+1-j][8-j]=='o' && countx!=0)countx--;}
		  else {countx=0;counto=0;}
		  if (countx>0 && counto>=4) sum+=1;
		  if (countx>4 && counto>=4) sum+=4;
		  if (countx>8 && counto>=4) sum+=2;}
		  countx=0;counto=0;}
	
		  return sum;}	  
		  
		  
		  
		  
	int maxblock(plot think4,int a[7]){
		plot plotit;int current,current2;
		plotit=think4;
		fill(plotit);
		current=check2(plotit);
		current2=check3(plotit);
		int i; float m[7];
		for(i=0;i<7;i++){
			m[i]=-2;
				plotit=think4;
			if(a[i]==0){
			chance(49+i,plotit);
			fill(plotit);
			m[i]=def*(current-check2(plotit))+(1-def)*(check3(plotit)-current2);}}
		int max=-1,manno=-1;
		i=0;	if(m[i]>max) {max=m[i];manno=i;}
		i=1;	if(m[i]>max) {max=m[i];manno=i;}
		i=2;	if(m[i]>max) {max=m[i];manno=i;}
		i=3;	if(m[i]>max) {max=m[i];manno=i;}
		i=4;	if(m[i]>max) {max=m[i];manno=i;}
		i=5;	if(m[i]>max) {max=m[i];manno=i;}
		i=6;	if(m[i]>max) {max=m[i];manno=i;}			
		return 49+manno;}
	
int intel(plot think4){
plot plotit,plotit2;
int i,j,lost=0,a,lostc[7];
for (j=1;j<8;j++){
	lost=0;
	plotit=think4;
	a=plotit.turn;
	chance(j+48,plotit);
	if (check (plotit)==2 || check (plotit)==1){
	if (a+1==plotit.turn)	return 48+j;}}
	int k;
	for (j=2;j<9;j++){	
		lost=0;	
		plotit=think4;
		a=plotit.turn;
	if (j%2==0)k=j/2;
	else k=1-j/2;
   chance(k+51,plotit);
   if (a+1==plotit.turn){
	for (i=1;i<8;i++){
	 plotit2=plotit;
	a=plotit2.turn;
  chance(48+i,plotit2);
    if (check (plotit2)==1)lost++;}
    {if (a+1==plotit2.turn){
    lostc[k+2]=lost;
 
	  }}}}
	 
	   if(maxblock(think4,lostc)!=48)return maxblock(think4,lostc);
	   
	   for(i=0;i<7;i++) {if (lostc[i]==0)return 49+i;}
	   return 49+rand()%7;
    }
    
int main(){
char players='1';
cout << "Connect 4"<<endl;
 cout <<"select the game mode\n1.One player\n2.Two player";
players=getchar();
if (players=='1')
{cout <<endl<<"Give defensive status of computer(1-100)";
cin >>def;
def=(def)/100;
cout << endl << "whose turn first\n0.computer\n1.player";
 cin >>bool1;}
intialize(plot4);
print (plot4);
int a,winner=0;


while(plot4.turn<42 && winner==0){
	if (players=='1' && plot4.turn%2==bool1){ a=intel(plot4);}
	
	 else a=getchar();
	 
chance(a,plot4);
print (plot4);
winner =check (plot4);
   if (winner==1) cout<<"X is the winner";
   if (winner==2) cout<<"0 is the winner";
   }
}
