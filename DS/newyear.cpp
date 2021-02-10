/* 

███╗░░██╗███████╗░█████╗░██████╗░░█████╗░███╗░░░███╗░█████╗░███╗░░██╗░█████╗░███████╗██████╗░
████╗░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗████╗░████║██╔══██╗████╗░██║██╔══██╗██╔════╝██╔══██╗
██╔██╗██║█████╗░░██║░░╚═╝██████╔╝██║░░██║██╔████╔██║███████║██╔██╗██║██║░░╚═╝█████╗░░██████╔╝
██║╚████║██╔══╝░░██║░░██╗██╔══██╗██║░░██║██║╚██╔╝██║██╔══██║██║╚████║██║░░██╗██╔══╝░░██╔══██╗
██║░╚███║███████╗╚█████╔╝██║░░██║╚█████╔╝██║░╚═╝░██║██║░░██║██║░╚███║╚█████╔╝███████╗██║░░██║
╚═╝░░╚══╝╚══════╝░╚════╝░╚═╝░░╚═╝░╚════╝░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚══╝░╚════╝░╚══════╝╚═╝░░╚═╝

                            ███████████████████████████████
                            ████╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████
                            ██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
                            █╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬█
                            █╬╬╬███████╬╬╬╬╬╬╬╬╬███████╬╬╬█
                            █╬╬██╬╬╬╬███╬╬╬╬╬╬╬███╬╬╬╬██╬╬█
                            █╬██╬╬╬╬╬╬╬██╬╬╬╬╬██╬╬╬╬╬╬╬██╬█
                            █╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬█
                            █╬╬╬╬█████╬╬╬╬╬╬╬╬╬╬╬█████╬╬╬╬█
                            █╬╬█████████╬╬╬╬╬╬╬█████████╬╬█
                            █╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬█
                            █╬╬╬╬╬╬╬╬╬╬╬╬╬╬█╬╬╬╬╬╬╬╬╬╬╬╬╬╬█
                            █╬╬╬╬╬╬╬╬╬╬╬╬╬╬█╬╬╬╬╬╬╬╬╬╬╬╬╬╬█
                            █╬╬╬╬╬╬╬╬╬╬╬╬╬╬█╬╬╬╬╬╬╬╬╬╬╬╬╬╬█
                            █╬╬╬▓▓▓▓╬╬╬╬╬╬╬█╬╬╬╬╬╬╬▓▓▓▓╬╬╬█
                            █╬╬▓▓▓▓▓▓╬╬█╬╬╬█╬╬╬█╬╬▓▓▓▓▓▓╬╬█
                            █╬╬╬▓▓▓▓╬╬██╬╬╬█╬╬╬██╬╬▓▓▓▓╬╬╬█
                            █╬╬╬╬╬╬╬╬██╬╬╬╬█╬╬╬╬██╬╬╬╬╬╬╬╬█
                            █╬╬╬╬╬████╬╬╬╬███╬╬╬╬████╬╬╬╬╬█
                            █╬╬╬╬╬╬╬╬╬╬╬╬╬███╬╬╬╬╬╬╬╬╬╬╬╬╬█
                            ██╬╬█╬╬╬╬╬╬╬╬█████╬╬╬╬╬╬╬╬█╬╬██
                            ██╬╬██╬╬╬╬╬╬███████╬╬╬╬╬╬██╬╬██
                            ██╬╬▓███╬╬╬████╬████╬╬╬███▓╬╬██
                            ███╬╬▓▓███████╬╬╬███████▓▓╬╬███
                            ███╬╬╬╬▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬███
                            ████╬╬╬╬╬╬╬╬╬╬███╬╬╬╬╬╬╬╬╬╬████
                            █████╬╬╬╬╬╬╬╬╬╬█╬╬╬╬╬╬╬╬╬╬█████
                            ██████╬╬╬╬╬╬╬╬███╬╬╬╬╬╬╬╬██████
                            ███████╬╬╬╬╬╬╬███╬╬╬╬╬╬╬███████
                            ████████╬╬╬╬╬╬███╬╬╬╬╬╬████████
                            █████████╬╬╬╬╬███╬╬╬╬╬█████████
                            ███████████╬╬╬╬█╬╬╬╬███████████
                            ███████████████████████████████

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX_SIZE 1000001
#define mp make_pair
#define pb push_back
#define fr first
#define sc second
#define MOD 1e9 + 7
#define loop(i, n) for (int i = 0; i < n; i++)
#define nloop(i, n) for (int i = n - 1; i >= 0; i--)
#define veca(v) v.begin(), v.end()
#define arra(a, n) a, a + n

int arraySumvec(vector<int> &v)  
{ 
    int initial_sum  = 0;  
    return accumulate(v.begin(), v.end(), initial_sum); 
} 
 
int arraySum( int a[], int n)  
{ 
    int initial_sum  = 0;  
    return accumulate(a, a+n, initial_sum); 
} 
 int gcd(int a, int b)
{
    // Everything divides 0 
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

  int lcm(int a, int b)  
  {  
     return (a*b)/gcd(a, b);  
  }  
long long int in(){
    ll n;
    cin>>n;
    return n;
 }
 int i_input(){
    int n;
    cin>>n;
    return n;
 }
  string s_input(){
    string n;
    cin>>n;
    return n;
 }
long long int myXOR(long long int x, long long int y) 
{ 
   return (x^y); 
}
bool isPrime(long long int n) {
    for (long long int i = 2; i * i <= n; ++ i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
/*
void SieveOfEratosthenes(vector<ll> &primes)  
{  
    bool IsPrime[MAX_SIZE];  
    memset(IsPrime, false, sizeof(IsPrime));  
    
    for (ll p = 2; p * p < MAX_SIZE; p++)  
    {  
        if (IsPrime[p] == false)  
        {  
            for (ll i = p * p; i <  MAX_SIZE; i += p)  
                IsPrime[i] = true;  
        }  
    }  
  
    for (ll p = 2; p < MAX_SIZE; p++)  
       if (IsPrime[p])  
            primes.push_back(p); 
             
}  
long long int count1(string str,char checkCharacter)
{
   
    ll count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

   

    return count;
}
int Balanced_Substring(string str, int n) 
{ 
   
    int ans = 0; 
 
    vector<int> arr(n / 2 + 1, 0); 

    int d = 0; 
    for (int i = 0; i < n; i++) { 
       
        if (str[i] == '(') 
            d++; 
  
        else { 
            if (d == 1) { 
                for (int j = 2; j <= n / 2 + 1 && arr[j] != 0; j++) 
                    arr[j] = 0; 
            } 
            ++ans; 
            ans += arr[d]; 
            arr[d]++; 
            d--; 
        } 
    } 
  
    return ans; 
} 
int minx(int a,int b,int c){
    if(a<b and a<c){
        return a;
    }
    else if(b<c and b<a){
        return b;
    }
    else{
        return c;
    }
}
int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 
                        1, 2, 2, 3, 2, 3, 3, 4 }; 
  
unsigned int countSetBitsRec(unsigned int num) 
{ 
    int nibble = 0; 

    if (0 == num) 
        return num_to_bits[0]; 
  
    nibble = num & 0xf; 

    return num_to_bits[nibble] + countSetBitsRec(num >> 4); 
} 
int countSetBitsuptoN(int N)
{
   int two = 2,ans = 0; 
    int n = N; 
    while(n){ 
        ans += (N/two)*(two>>1); 
        if((N&(two-1)) > (two>>1)-1) ans += (N&(two-1)) - (two>>1)+1; 
        two <<= 1; 
        n >>= 1; 
    } 
    return ans; 
    // Your logic here
}
int check(string s,string j){


    int h=0;
    int count=0;
    
    for(int i=0;i<s.length();i++){
        if(s==j){
            h=count;
            break;
        }
        j=j.substr(j.length()-1,j.length()-1)+j.substr(0,j.length()-1);
       
       
        count++;



    }
    if(count>=s.length()){
        return -1;
    }
    return h;

}





bool hasd(int x,int d) 
{ 

    while (x != 0) 

    { 

        if (x%10 == d) 

           return true; 

        x   = x /10; 

    } 

    return false; 
} */
struct Node {
  int data;
  struct Node * left;
  struct Node * right;
};
struct Node * createnode(int data){
  struct Node *n=new Node();
  n->data=data;
  n->left=NULL;
  n->right=NULL;

}
void preorder(struct Node * root){
  if(root!=NULL){
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(struct Node * root){
  if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
  }
}
void inorder(struct Node * root){
  if(root!=NULL){
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
  }
}
int isBST(struct Node * root){
  static struct Node * prev=NULL;
  if(root!=NULL){
    if(!isBST(root->left)){
      return 0;
    }
    if(prev!=NULL and root->data<=prev->data){
      return 0;
    }
    prev=root;
    return isBST(root->right);
  }
  else{
    return 1;
  }
}
void solve(){
  struct Node *p=createnode(5);
  struct Node *p1=createnode(3);
  struct Node *p2=createnode(6);
  struct Node *p3=createnode(1);
  struct Node *p4=createnode(4);
  p->left=p1;
  p->right=p2;
  p1->left=p3;
  p1->right=p4;
  cout<<"This is preorder traversal : ";
  preorder(p);
  cout<<"\n";
   cout<<"This is postorder traversal : ";
  postorder(p);
  cout<<"\n";
   cout<<"This is inorder traversal : ";
  inorder(p);
  cout<<"\n";
  if(isBST(p))
  {
  cout<<"This is BST";
  } 
 


  }



int main() {
 
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
     if(painter[0]>0 or colour[0]>0){
    cout<<"NO";
  }



    */
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    /*clock_t start, end; 
    start = clock(); */
   
    ll t=1;
    //cin>>t;
    
    while(t--){
      solve();
      cout<<"\n";
   }
 }
    /*end = clock(); 
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; */


    
   