#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,i = 0,cnt = 0;
    cin>>m>>n;
    int j = 2;                
    while(1)
    {
        int flag = 0;           
        for(int k = 2; k <= sqrt(j); k++)
        {
            if(j % k == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            j++;
            continue;
        }
        else
        {
            i++;                     
            if(i >= m && i <= n)
            {
                cnt++;                    
                if(cnt % 10 == 0)
                {
                    cout<<j<<endl;
                }
                else if(i == n)
                {
                    cout<<j<<endl;
                }
                else
                    cout<<j<<" ";
            }
            if(i > n)
            {
                break;
            }
        }
        j++;
    }
    return 0;
}
