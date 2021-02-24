#include <iostream>
#include <cmath>

using namespace std;

bool check(unsigned int n)
{
    if(n<2)
        return false;
    else
    {
        int count=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                count ++;
        }
        if(count!=0)
            return false;
        else
            return true;
    }
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << check(n);
}
