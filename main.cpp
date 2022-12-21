//program to exercise function structure and return statement
#include <iostream>

using namespace std;
struct node
{
int value;
int info;
};
void display(node );
node getdata(node);


int main()
{
    node n,temp;
   temp= getdata(n);



    display(temp);

    return 0;
}
void display(node n)
{
     cout << n.info << endl;
     cout << n.value << endl;
}
node getdata(node n){
  cout << "enter value" << endl;
   cin>>n.value;
    cout << "enter info" << endl;
    cin>>n.info;
    return n;}
