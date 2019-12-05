#include<iostream>

using namespace std;

 

class Shape

{

    public:

    int l,h;

 

    public:

    void getdata()

    {

        cout<<"Enter Length: ";

        cin>>l;

        cout<<"Enter Breadth: ";

        cin>>h;

    }

 

};

 

class Rectangle: public Shape

{

    int area;

    public:

    void putdata()

    {

        area= l*h;

 

        cout<<"Area of Rectangle is: "<<area<<endl;

    }

};

 

class Triangle: public Rectangle

{

    int area;
    

    public:

    void display()

    {

    area = 0.5*l*h;

 

    cout<<"Area of Triangle is: "<<area<<endl;

    }

};

 

int main()

{

    int ch,c=1;
    Triangle t;
    while(c==1)
    {
	

    cout<<"\n\n\n\n\n\nCalculate Area of: ";

    cout<<"\n\t1.Triangle \n\t2.Rectangle \n\t3.Exit \n";

    cout<<"Enter Your Choice: ";

    cin>>ch;

   

    
    



    switch(ch)

    {

        case 1: t.getdata();
				t.display(); break;

        case 2: t.getdata();
				t.putdata(); break;
        
        case 3: c=0; break;

        

    }

 
	}
return 0;

 

}


	
	
	

