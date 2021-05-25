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

void solve()
{   // delete and new keyword and operator
    // int a=7;
    // int *p=&a;
    // int** q=&p;
    // cout<<q<<endl;
    // cout<<**q<<endl;
    // cout<<&q<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    int *p = new int(40);
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    int *arr=new int[3];
    loop(i,3){
        cin>>arr[i];
    }
    *(arr+1)=33;
    //delete[] arr;
    loop(i,3){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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