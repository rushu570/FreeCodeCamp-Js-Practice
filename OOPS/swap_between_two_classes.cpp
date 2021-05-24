#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX_SIZE 1000001 + 1
#define mp make_pair
#define pb push_back
#define fr first
#define sc second
#define MOD 1e9 + 7
#define loop(i, n) for (int i = 0; i < n; i++)
#define nloop(i, n) for (int i = n - 1; i >= 0; i--)
#define veca(v) v.begin(), v.end()
#define arra(a, n) a, a + n
class y;
class x
{
    int val1;
    friend void exchange(x &, y &);

public:
    void get(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "The data of class x is " << val1 << endl;
    }
};
class y
{
    int val2;
    friend void exchange(x &, y &);

public:
    void get(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << "The data of class y is " << val2 << endl;
    }
};
void exchange(x &c1, y &c2)
{
    int temp = c1.val1;
    c1.val1 = c2.val2;
    c2.val2 = temp;
    cout << "The value of first class data is " << c1.val1 << " and for second class data is " << c2.val2 << endl;
}
void solve()
{
    x a1;
    y a2;
    a1.get(12);
    a2.get(100);
    a1.display();
    a2.display();

    exchange(a1, a2);
}

int main()
{

    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}