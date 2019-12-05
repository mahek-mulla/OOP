#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public :
		int roll, mob , marks[6],mm,dd,yy;
		char name[20],bg[10],address[30],year[10];
		float percent;
		
		void accept();
		
		void display();
			
};

void student::accept()
{
	int i,c;
	cout<<"\n ENTER YOUR NAME : ";
	cin>>name;
	cout<<"\n MOBILE NO. : ";
	cin>>mob;
	
	
	
	cout<<"\n DOB  : ";
	dob :cout<<"\n DATE : ";
		cin>>dd;
		cout<<"\n MONTH : ";
		cin>>mm;
		cout<<"\n YEAR : ";
		cin>>yy;
		if(dd>31 || mm>12 || yy<1930 || yy>2019 || dd==0 || mm==0)
		{
				cout<<"INVALID DATE OF BIRTH \n RE-ENTER : ";
			goto dob;
		}
	cout<<"\n ENTER BLOOD GROUP : ";
	bgrp:
		cin>>bg;
		if(strcmp("A+",bg)==0 || strcmp("B+",bg)==0 || strcmp("O+",bg)==0 || strcmp("AB+",bg)==0 ||  strcmp("A-",bg)==0 || strcmp("B-",bg)==0 || strcmp("O-",bg)==0|| strcmp("AB-",bg)==0) 
			{
				cout<<"VALID";
			}
		else
			{
			cout<<"RE-ENTER";
			goto bgrp;
			}
	cout<<"\n ADDRESS : ";
	cin>>address;
	cout<<"\n YEAR : \nFY\tSY\tTY\tBE\n : ";
	yr : cin>>year;
		if(strcmp(year,"FY")==0 ||  strcmp(year,"SY")==0 || strcmp(year,"TY")==0 || strcmp(year,"BE")==0 )	
		{
			cout<<"VALID";
		}
		else
		{
			cout<<"RE-ENTER ";
			goto yr;
		}
	cout<<"\n ENTER MARKS OF THREE SUBJECTS out of 100: ";
	for(i=0;i<3;i++)
	{
		wng :{
			
			cin>>marks[i];
			if (marks[i]>100 || marks[i]<0)
			{
			cout<<" \nINVALID RE-ENTER\n";
			goto wng;
			}
		}
	}
	int total=0;
	for(i=0;i<3;i++)
	{
		total=total+marks[i];
		
	}
	percent=(total*100)/300;
	
}

void student :: display()
{
	cout<<"\nNAME : "<<name;
	cout<<"\nMOBILE NO. : "<<mob;
	cout<<"\nDOB : "<<dd<<"/"<<mm<<"/"<<yy;
	cout<<"\nBLOOD GROUP : "<<bg;
	cout<<"\nADDRESS : "<<address;
	cout<<"\nYEAR : "<<year;
	cout<<"\nMARKS : ";
	for(int i=0;i<3;i++)
	{
		cout<<marks[i]<<"\t";
	}
	cout<<"\nPERCENTAGE : "<<percent<<"%";
}



int main()
{
	student st[50];
	int num;
	cout<<"\nENTER TOTAL NUMBER OF STUDENTS : ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cout<<"STUDENT "<<i+1<<" : ";
		st[i].accept();
	}
	for(int i=0;i<num;i++)
	{
		cout<<"STUDENT "<<i+1<<" : \n\n ";
		st[i].display();
	}
	return 0;
}
