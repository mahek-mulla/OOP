#include <iostream>

using namespace std;

 

class Complex

{

 

private:

   double real,imag;

 

public:

   Complex()

   {

      real=imag=0;

   }

 

   Complex(double r)

   {

      real=r;

      imag=0;

   }

   

   Complex(double r, double i)

   {

      real=r;

      imag=i;

   }

   

   Complex(Complex &obj)

   {

      real=obj.real;

      imag=obj.imag;

   }

    

   Complex operator +(Complex c)

   {

      Complex Add;

      Add.real = real + c.real;

      Add.imag = imag + c.imag;

      return Add;

   }

 

   Complex operator -(Complex c)

   {

      Complex Sub;

      Sub.real = real - c.real;

      Sub.imag = imag - c.imag;

      return Sub;

   }

  

   Complex operator *(Complex c)

   {

      Complex Mult;

      Mult.real =real*c.real;

      Mult.imag = imag*c.imag;  
	  return Mult;

   }

   

   Complex operator /(Complex c)

   {

      Complex Div;

      Div.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);

      Div.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);

      return Div;

   }

    

   void print()

   {

        cout<<real<<"+"<<imag<<"i"<<endl<<endl;

   }

    

   double getReal() 

   const{

            return real;

         }

    

   double getImag() 

   const{

            return imag;

         }

    

   void setReal(double re)

   {

            real = re;

 

   }

    

   void setImag(double im)

   {

        imag = im;

   }

 

};

 

//***************MAIN***************************

int main()

{

   double real1,imag1,real2,imag2;

   int ch;

   char ans;

 

   cout<<"Enter the Real  part of First Number: ";

   cin>>real1;

 

   cout<<"Enter the imaginary  part of First Number: ";

   cin>>imag1;

 

   Complex obj1(real1,imag1);

 

   obj1.print();

 

   cout<<"Enter the Real part of Second Number: "; 

   cin>>real2;

 

   cout<<"Enter the Imaginary part of second number: ";

   cin>>imag2;

 

   Complex obj2(real2,imag2);

 

   obj2.print();

 

   Complex c;
   
   
   cout<<"\n-<<  OPERATIONS ON COMPLEX NUMBER  >>-";

   cout<<"\n\t\t1. Addition";

   cout<<"\n\t\t2. Subtraction";

   cout<<"\n\t\t3. Multiplication";

   cout<<"\n\t\t4. Division";

   cout<<"\n\t\t5. Exit";

 

 

 

    do

  {

   

   

 cout<<"Enter your Choice: ";

 cin>>ch;

 

 switch(ch)

 {

 

   case 1:

         c = obj1+obj2;

         cout<<"Addition is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

         break;

 

   case 2:

         c= obj1-obj2;

         cout<<endl<<"Subtraction is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

         break;

 

   case 3:

         c= obj1*(obj2);

         cout<<endl<<"Multiplication is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

         break;

 

   case 4:

         c= obj1/(obj2);

         cout<<endl<<"Division result  is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

         break;

      default :

        cout<<"\n\n\tInvalid choice...";

        break;

 

   }

 

   cout<<"\nDo you want to continue(Y/N)?==>";

   cin>>ans;

  }while(ans=='Y'||ans=='y');

   return 0;

}
