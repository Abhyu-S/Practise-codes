#include <iostream>
using namespace std;

int main()
{
    int n;
    int out_list[2*n +1];
    cout<<"Enter the length of array : ";
    cin>>n;
    int a_list[n], b_list[n];
    for (int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        a_list[i]=num;
        b_list[i]=num;
    }
    int a_len = sizeof(a_list)/sizeof(a_list[0]);
    int b_len = sizeof(b_list)/sizeof(b_list[0]);

    while((a_len > 0) || (b_len > 0))
    {
        int a_choice, b_choice;
        cout<<"Enter A's choice : "<<endl;
        cin>>a_choice;
        cout<<"Enter B's choice : "<<endl;
        cin>>b_choice;
        if (a_choice>b_choice)
        {
            int l;
            for (int i=0; i<b_len; i++)
            {
                b_list[i] = b_choice;
                l=i;
                break;
            }
            for (int i=l; i<b_len; i++)
            {
                b_list[i] = b_list[i+1];
            }
            b_len--;
            out_list.append(1);
        }
        else if(b_choice>a_choice)
        {
            int l;
            for (int i=0; i<a_len; i++)
            {
                a_list[i] = a_choice;
                l=i;
                break;
            }
            for (int i=l; i<a_len; i++)
            {
                a_list[i] = a_list[i+1];
            }
            a_len--;
            cout<<2;
        }
        else
        {
            int l;
            for (int i=0; i<b_len; i++)
            {
                b_list[i] = b_choice;
                l=i;
                break;
            }
            for (int i=l; i<b_len; i++)
            {
                b_list[i] = b_list[i+1];
            }
            b_len--;
            
            int k;
            for (int i=0; i<a_len; i++)
            {
                a_list[i] = a_choice;
                k=i;
                break;
            }
            for (int i=k; i<a_len; i++)
            {
                a_list[i] = a_list[i+1];
            }
            a_len--;
            
            cout<<0;
        }
    }
}