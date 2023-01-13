#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int i;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
}
