#include <iostream>

using namespace std;
int N;
int main()
{
    cout << "jakie N?" << endl;
    cin >> N;
    for(int i=0; i<=N; i++)
    {
       if (i%3==0)
       {
            cout<<i<< ", ";
       }

    }
    return 0;
}
