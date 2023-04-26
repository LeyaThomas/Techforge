
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
int main() 
{ int rn,x,n=10,i,score; 
time_t t; 
srand((unsigned) time(&t)); 
rn=rand() % 100; 
for(i=1;i<=n;i++) 
{ printf("\nGuess a no btw 1 and 100: "); 
scanf("%d",&x); if(x!=rn) 

{ printf("\nwrong\nno. of tries left=%d",(n-i)); 

} if(x<rn)
 printf("\nyour guess is low\n"); 
 else if(x>rn) 
 printf("\nyour guess is high\n"); 
 if(x==rn) 
 { printf("\nsuccess"); 
 score=(n-i)*10; 
 printf("\nyour score is %d",score); 
 break; 
 } FILE *fp; 
 } 
 return 0; }
