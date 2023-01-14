#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
     
    for(int i=1;i<=t;i++)
    {   int n;
        cin>>n;
        int factors=0;
        for(int j=2;j*j<=n;j++)
        {
            if(n%j==0)
            {
                factors=factors+1;
                break;
            }
        }
       if(factors==2)
       {
           cout<<"prime"<<endl;
       }
       else
       {
           cout<<"not prime"<<endl;
       }
        
    }
    
