#include"iostream"
using namespace std;
int main()
{
    int n=10,i=0,j=0,k=0;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]<ar[j+1])
            {
                k=ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
