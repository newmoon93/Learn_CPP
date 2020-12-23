#include <iostream>
using namespace std;

int main(void)
{
    int T = 0;
    int N = 0;
    int calc = 0;
    cout << "Hello_hahahahaha3555@@\n";

    cin>> T;
    for (int i=0; i<T; i++)
    {
        cin >> N;
        for (int j=1; j<=N; j++)
        {
            if(j%2==1)
            {
                calc += j;
                cout << "--: " << calc << endl;
            }
            else
            {
                calc -= j;
                cout << "--: " << calc << endl;
            }
        }
        cout << "# " << calc << endl;
        calc = 0;
    }
    return 0;
}
// command + shift + B ==> g++ build
// command + shift + D ==> Debug mode