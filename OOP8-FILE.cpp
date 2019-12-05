#include<fstream>

#include<iostream>

using namespace std;

int main()

{

  string str;

  

  ofstream out("Program8.dat",ios::app);

  out<<"\n----------\nHello Everyone\n----------"<<endl;
  out<<"\n\n Progam running successfully"<<endl;

  out.close();

 

  ifstream in("Program8.dat");

  while(in)

  {

  getline(in,str);

  cout<<str;

  }

  in.close();

 

  return 0;
}
