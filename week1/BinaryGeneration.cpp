#include <iostream>
#include <string>
using namespace std;
int n;
string s;
// sinh dãy nhị phân tại vị trí i
void gen(int i, string s)
{
    if (i == n)
        cout << s << endl;
    else
    {

        gen(i + 1, s + '0');

        gen(i + 1, s + '1');
    }
}
int main()
{
    cin >> n;
    gen(0, s);
    return 0;
}
