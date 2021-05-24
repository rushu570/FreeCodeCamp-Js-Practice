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

class complex1{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex1 o1, complex1 o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

void solve()
{
    complex1 c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
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