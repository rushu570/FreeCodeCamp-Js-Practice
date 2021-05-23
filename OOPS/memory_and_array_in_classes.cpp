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
class Shop
{
    int itemprice[100];
    int itemid[100];
    int counter;

public:
    void initcnt(void)
    {
        counter = 0;
    }
    void setprice(void);
    void display(void);
};
void Shop::setprice(void)
{
    cout << "Enter id "<<counter+1<<"\n";
    cin >> itemid[counter];
    cout << "Enter price\n";
    cin >> itemprice[counter];
    counter++;
}
void Shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item with number " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
// void solve()
// {
//     shop vijay;
//     vijay.initcnt();
//     vijay.setprice();
//     vijay.setprice();
//     vijay.setprice();
//     vijay.display();
// }

int main()
{

    // ios::sync_with_stdio(0);
    // cout.tie(0);
    // cin.tie(0);
    
    Shop vijay;
    vijay.initcnt();
    vijay.setprice();
    vijay.setprice();
    vijay.setprice();
    vijay.display();
    // //cin>>t;
    // while (t--)
    // {
    //     solve();
    //     cout << endl;
    // }
    return 0;
}