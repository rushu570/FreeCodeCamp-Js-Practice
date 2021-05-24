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
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

void solve()
{
    /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */

    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display_results();
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