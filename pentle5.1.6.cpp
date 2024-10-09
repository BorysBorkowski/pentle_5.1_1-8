#include <iostream>

using namespace std;
int K;
int main()
{
    cout << "jakie K?" << endl;
    cin >> K;
    for (int i=0; i<=100; i++)
    {
        if (i%K==0)
        {
            cout <<i<<endl;
        }
    }
     for (int j=200; j<=300; j++)
    {
        if (j%K==0)
        {
            cout <<j<<endl;
        }
    }

    return 0;
}
