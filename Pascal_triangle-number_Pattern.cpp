#include <iostream>
using namespace std;
/*
5
1 //0C0
1 1 //1C0 1C1
1 2 1 //2C0 2C1 2C2       
1 3 3 1 //3C0 3C1 3C2 3C3    
1 4 6 4 1 //4C0 4C1 4C2 4C3 4C4  
1 5 10 10 5 1 //5C0 5C1 5C2 5C3 5C4 5C5
*/
int fact(int n){
    int factorial = 1;
    for(int i=2; i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){

    

    int row;
    cin>>row;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=i;j++){
            int ans = fact(i)/( fact(j) * fact(i-j) );
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}