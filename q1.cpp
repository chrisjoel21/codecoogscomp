#include<iostream>
#include<math.h>

#include<algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,x;
    while(t--)
    {
        cin>>n>>x;
        int f=1;
        if(n<=2)
        {
            cout<<f<<endl;
        }
        else
        {
            for(int i=0;i<1000;i++)
            {
                if((i*x+3<=n)&&(n<=(i+1)*x+2))
                {
                    cout<<f+1<<endl;
                    break;
                }
                else
                    f++;
            }
        }
    }
    return 0;
}