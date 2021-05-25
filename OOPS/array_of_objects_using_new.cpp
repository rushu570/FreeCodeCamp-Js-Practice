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

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

void solve()
{
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *Temp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price "<< i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item no: "<<i+1<<endl;
        Temp->getData();
        Temp++;
    }
    
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