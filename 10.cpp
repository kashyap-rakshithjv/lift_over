#include <iostream>

using namespace std;


int main(){
    int n,r[10],i;
    cin >> n;
    while(n!=0)
        {
        n=n/2;
        r[i]=n%2;
    }
    for(i=0;i<=n;i++)
    {
    cout<<r[i];
}
    return 0;
    
}

