#include<iostream>
using namespace std;

int main()
{
    int a[5]={2,5,7,9,13};
    int b[4]={3,8,10,14};

    int c[10],counter=0,i=0,j=0,k=0;

    while(i<5 &&j<4)
    {
        if (a[i]>b[j])
        {
            c[k]=b[j];
            j++;k++;
        }
        else{
            c[k]=a[i];
            i++;k++;
        }
    }
    while(j<4)
    {
        c[++k]=b[j];
        j++;
    }
    for(i=0;i<9;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}