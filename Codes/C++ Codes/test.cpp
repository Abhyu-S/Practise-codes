#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size=2*n - 1;
    for (int i = 0; i<size; i++)
    {
        for (int j = 0; j<(size+1); j++)
        {
            if((i>j) || ((size-1-i)>(size-1-j)))
            {
                if(i<(size-1-i))
                {
                    cout<<n-i;
                }
                else
                {
                    cout<<n-(size-1-i);
                }
            }
            else if((j>i) || ((size-1-j)>(size-1-i)))
            {
                if(j<(size-1-i))
                {
                    cout<<n-j;
                }
                else
                {
                    cout<<n-(size-1-j);
                }
            }       
        }
        cout<<endl;
    }
    return 0;
}