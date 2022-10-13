#include<iostream>
#include<string.h>
using namespace std;
class student{
	int roll;
	char name[20];
	float sub1,sub2,per;
	public:
		void getdata(){
			cout<<"enter the roll: ";
			cin>>roll;
			cin.ignore();
			cout<<"enter the name: ";
			cin.getline(name,20);
			cout<<"enter the marks of 2 subjects: ";
			cin>>sub1>>sub2;
		}
		void setdata(int roll1,const char name2[],float subj1,float subj2){
			roll=roll1;
			strcpy(name,name2);
			sub1=subj1;
			sub2=subj2;
		}
		void cal_per(){
			per=((sub1+sub2)/200)*100;
		}
		void display(){
			cout<<roll<<"\t"<<name<<"\t"<<sub1<<"\t"<<sub2<<"\t"<<per<<endl;
		}
};
int main(){
	student s1,s2;
	s1.setdata(1,"kannu",45.6f,66.9f);
	s2.setdata(2,"anita",77.0f,33.45f);
	s1.cal_per();
	s2.cal_per();
	s1.display();
	s2.display();
}
