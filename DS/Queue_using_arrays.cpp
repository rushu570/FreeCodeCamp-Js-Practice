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
} 

// In C new Node is (struct Node *)malloc(sizeof(struct Node));
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node * ptr ){
    struct Node * p=ptr;
   do{
        cout<<p->data<<endl;
        p=p->next;
    } while(p!=ptr);
    

}
struct Node * insertatfirstcircular(struct Node *head,int data){
    struct Node * ptr=new Node();;
    struct Node *p=head;
    ptr->data=data;
    while(p->next!=head){
        p=p->next;

    }
    p->next=ptr;
   ptr->next=head;
   head=ptr;

    return head;
}
struct Node * insertatfirst(struct Node *head,int data){
    struct Node * ptr=new Node();
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct Node * deletefirst(struct Node *head){
    struct Node * ptr=new Node();
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node * insertatindex(struct Node *head,int data,int index){
    struct Node * ptr=new Node();
    struct Node * w=head;
    int i=0;
    while(i!=index-1){
        w=w->next;
        i++;
    }
    ptr->next=w->next;
    ptr->data=data;
    w->next=ptr;
    return head;
}
struct Node * deletebyvalue(struct Node *head,int value){
    struct Node * ptr=head;
    struct Node * w=head->next;
   
    while(w->data!=value and w->next!=NULL){
        w=w->next;
        ptr=ptr->next;
    }
    if(w->data==value){
        ptr->next=w->next;
        free(w);
        
    }
    return head;
    
    

    
}
struct Node * deleteatlast(struct Node *head){
    struct Node * ptr=new Node();
    struct Node * ptr1=new Node();
    ptr=head;
    ptr1=ptr->next;
    int i=1;

    while(ptr1->next!=NULL){
        ptr=ptr->next;
        ptr1=ptr1->next;

    }
    ptr->next=NULL;
    free(ptr1);
    return head;
}
struct Stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct Stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }

}
int isFull(struct Stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }

}
int pop(struct Stack *ptr){
    if(isEmpty(ptr)){
        cout<<"No element to remove";
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int push(struct Stack *ptr,int val){
    if(isFull(ptr)){
        cout<<"Overflow while pushing "<<val;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        return val;
    }
}
int peek(struct Stack *ptr,int index){
    if(ptr->top-index+1<0){
        cout<<"Invalid";
        return -1;
    }
    else{
        return ptr->arr[ptr->top-index+1];
    }
}
int stackbottom(struct Stack *ptr){
    return ptr->arr[0];

}
int stacktop(struct Stack *ptr){
    return ptr->arr[ptr->top];

}
*/
struct Queue{
    int size;
    int f;
    int r;
    int *arr;

};
int isempty(struct Queue * q){
    if(q->f==q->r){
        return 1;
    
    }
    else{
        return 0;
    }
}
int isfull(struct Queue * q){
    if(q->r==q->size-1){
        return 1;
    
    }
    else{
        return 0;
    }
}
void enqueue(struct Queue* q,int val ){
    if(isfull(q)){
        cout<<"Overflow\n";
    }
    else{
        q->r=q->r+1;
        q->arr[q->r]=val;

    }

}
int dequeue(struct Queue* q){
    if(isempty(q)){
        cout<<"empty\n";
        return -1;
    }
    else{
         q->f=q->f+1;
        int s=q->arr[q->f];
        return s;
        

    }

}


void solve(){
    struct Queue *q=new Queue();
    q->size=5;
    q->f=q->r=-1;
    q->arr=new int[q->size];
    /*if(isfull(q)){
        cout<<"It is full"<<endl;
    }
    else{
        cout<<"It is not full\n";
    }
    if(isempty(q)){
        cout<<"It is empty\n";
    }
    else{
        cout<<"It is not empty\n";
    }*/
    enqueue(q,25);
    enqueue(q,26);
    enqueue(q,27);
    enqueue(q,28);
    enqueue(q,29);
    int d=dequeue(q);
    if(d>0)cout<<"This is deleted "<<d<<endl;
    enqueue(q,28);
    enqueue(q,29);
    //traversal(q);

   
    
    
}

int main() {
 
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
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


    
   
