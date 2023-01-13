#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    
    
    
    //write your code here
    
    
    for(int i=low;i<=high;i++)
    {
        int factor=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {   factor++;
                break;
            }
        }
        if(factor==0)
        {
           cout<<i<<" "; 
        }
        
    }
