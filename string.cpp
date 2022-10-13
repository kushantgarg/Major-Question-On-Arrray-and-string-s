#define MAX 10
#include<iostream> 
int abc(int i)	;
main(){
 int i = abc(10);
std:: cout<<--i;
int var=5;
std::cout<<--var;
}
int abc(int i)	{
 return(i++);
}

