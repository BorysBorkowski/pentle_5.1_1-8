#include <iostream>

using namespace std;

int N;
int main()
{
    cout << "od ktorej cyfry naturalnej maja sie pojawic cyfry na ekranie?" << endl;
    cin >> N;
    for(int i=N; i>=0; i--)
    {
        cout <<i<< endl;
    }
    return 0;
}
