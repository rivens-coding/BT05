#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int rand(int n)
{
    srand(time(NULL));
    int x=rand()%(n+1);
    return x;
}
int main()
{
    int n;
    cin >> n;
    cout << rand(n);

}
