#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
    
}
