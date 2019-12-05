#include<iostream>

#include<list>

#include<iterator>

using namespace std;

void display(list <int> l1,list <int> :: iterator i)

{

  

  for(i=l1.begin();i!=l1.end();++i)

  {

    cout<<"\t"<<*i;

  }

  cout<<endl;

}

 

int main()

{

 

 list <int> l1_list,l2_list;

 list <int>::iterator i;

 

  for(int i=1;i<11;i++)

  {

   l1_list.push_back(i);

  }

  l2_list.push_back(10);

  l2_list.push_back(5);

  l2_list.push_back(5);

  l2_list.push_back(6);

  l2_list.push_back(8);

  l2_list.push_back(1);

  

 cout<<"\n List 1:";

 display(l1_list,i);

 cout<<"-----------------------STL Library member functions------------------";

 cout<<"\n1)reverse():";

 l1_list.reverse();

 display(l1_list,i);

 cout<<"\n2)empty():";

 int a=l1_list.empty();

 (a==1)?cout<<"empty":cout<<"not empty"<<endl;

 cout<<"\n3)remove():";

 l1_list.remove(4);

 display(l1_list,i);

 cout<<"-----------------------------------------------------------------------";

 cout<<"\nList 2 Before sort:";

 display(l2_list,i);

 cout<<"\n4)sort():";

 l2_list.sort();

 display(l2_list,i);

 cout<<"\n5)unique():";

 l2_list.unique();

 display(l2_list,i);

 cout<<"\n6)Insert:";

 l1_list.insert(i,1,11);

 display(l1_list,i);

return 0;

}
