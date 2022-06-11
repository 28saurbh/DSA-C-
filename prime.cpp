#include <iostream>
using namespace std;

int main()
{
    int n, i, p=0;
    cout << "Enter no. ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout<<"NO is Not Prime "<< endl;
            p=1;
            break;
        }
    }
    if(p==0){
        cout<<"No is Prime ";
    }

}

