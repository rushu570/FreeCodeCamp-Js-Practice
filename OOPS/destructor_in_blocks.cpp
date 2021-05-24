#include<bits/stdc++.h>
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
int count1=0;
class num{
    
    public:
    num(){
        count1++;
        cout<<"constructor is called for number "<<count1<<endl;
        }
    ~num(){
        cout<<"destructor is called for number "<<count1<<endl;
        count1--;
        }
};
void solve()
{   cout<<"inside main\n";
    num n1;
    {
        cout<<"inside block\n";
        num n2,n3;
        cout<<"exiting\n";

    }
    cout<<"back to main\n";
}

int main(){
    
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