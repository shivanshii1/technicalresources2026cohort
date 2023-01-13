#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int rem;
   
    while(n!=0)
    {
        rem=n%10;
        cout<<rem<<endl;
        n=n/10;
    }
    
    
}
