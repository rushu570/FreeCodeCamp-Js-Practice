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

// typedef class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setdata(int a1, int b1, int c1);
//     void getdata()
//     {
//         cout << "The value of a is " << a << "\n";
//         cout << "The value of b is " << b << "\n";
//         cout << "The value of c is " << c << "\n";
//         cout << "The value of d is " << d << "\n";
//         cout << "The value of e is " << e << "\n";
//     }
// } em;

// void Employee ::setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

class binary
{
    string s;

public:
    void read(void);
    void chk_bin();
};

void binary::read(){
    cout<<"Enter"<<endl;
    cin>>s;
}

void binary:: chk_bin(){
    bool x=true;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' and s.at(i)!='1'){
            cout<<"Incorrect"<<endl;
            x=false;
            break;
        }
    }
    if(x)cout<<"Correct"<<endl;
}
int main()
{
    // em rushank;
    // rushank.setdata(1, 2, 4);
    // rushank.d = 33;
    // rushank.e = 22;
    // rushank.getdata();
    binary r1;
    r1.read();
    r1.chk_bin();
    return 0;
}