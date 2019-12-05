#include<iostream>

using namespace std;

 

template<class T>

   

    void selectionsort(T a[], int n)

    {

        int i ,j ;

        T temp;

        

        for(i=0;i<n-1;i++)

    {

            for(j=i+1; j<n ; j++)

            {

                if(a[i]>a[j])

                {

                    temp=a[i];

                    a[i]=a[j];

                    a[j]=temp;

                }

            }

        }

        

    }

 

int main()

{

     int n=6,i;

     int ch;

     char ans;

     int a[n];

     float b[n];

 

    

    selectionsort(b,n);

    do{

        cout<<"\n-------------------------Template---------------------------\n";

        cout<<"\n\t1. Integer Sort";

        cout<<"\n\t2. Float Sort";

        cout<<"\n\t3. Exit";

        cout<<"\n-------------------------------------------------------------\n";

 

        cout<<"Enter your choice: ";

        cin>>ch;

 

        switch(ch)

        {

            case 1:

                    
                    cout<<"\nEnter 6 elements  ";
                    
                    for(int j=0;j<n;j++)
                    {
                    	cin>>a[j];
					}
					selectionsort(a,n);
					cout<<"\n Integer Sorted array is: \n";

                    for(i=0;i<n;i++)

                    {

                        cout<<a[i]<<"\t";

                     }

                     break;

 

            case 2:cout<<"\nEnter 6 elements : ";
                    
                    for(int j=0;j<n;j++)
                    {
                    	cin>>b[j];
					}
					selectionsort(b,n);

                    cout<<"\n Float Sorted array is: \n";

                    for(i=0;i<n;i++)

                    {

                        cout<<b[i]<<"\t";

 

                    }

                    break;

           default :

                    cout<<"\n\n\tInvalid choice...";

                    break;

 

   }

 

   cout<<"\n\nDo you want to continue(Y/N)?==>";

   cin>>ans;

  }while(ans=='Y'||ans=='y');

    return 0;

 

}

 
