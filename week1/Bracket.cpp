
#include <iostream>
using namespace std;
int n;
int a[100];
void inkq()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << ' ';
}
int checkvalid()
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            s += -1;
            if (s < 0)
                return 0;
        }
        else
            s += a[i];
    }
    if (s == 0)
        return 1;
    else
        return 0;
}
void thu(int k)
{
    if (k == n && !checkvalid())
    {
    }

    else if (k == n && checkvalid())
        inkq();

    else if (a[k] == 0)
    {
        a[k] = 1;
        thu(k + 1);
        a[k] = 2;
        thu(k + 1);
        a[k] = 0;
    }
    else
        thu(k + 1);
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    thu(0);
}
