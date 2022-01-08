#include<iostream>
using namespace std;
int main()
{
    /*
        1         
      2 1 2       
    3 2 1 2 3     
  4 3 2 1 2 3 4   
5 4 3 2 1 2 3 4 5 
    */
    int n;
    cout<<"enter the number  = ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            cout<<"  ";
        for(int k=i; k>=2; k--)
            cout<<k<<" ";

        for(int m=1; m<=i; m++)
            cout<<m<<" ";
    
        cout<<endl;
    }
    return 0;
}