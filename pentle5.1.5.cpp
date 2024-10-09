#include <iostream>

using namespace std;
int N;
int M;
int main()
{
    cout << "jakie N?" << endl;
    cin >> N;
    cout << "jakie M?" << endl;
    cin >> M;
    if (N<M)
    {
        for(int i=M - 1; i>=N; i--)
        {
            cout<<i<<endl;
        }
    }
    else
    {
        for(int i=N; i>=M + 1; i--)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
