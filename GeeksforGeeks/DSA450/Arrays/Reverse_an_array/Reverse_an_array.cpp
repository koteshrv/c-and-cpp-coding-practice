/*
** koteshrv
** date: 03/05/2021 22:21:00
*/

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define ull unsigned long long
#define fo(i,n) for(int i = 0; i < n; i++)
#define Fo(i,k,n) for(int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define For(i,k,n,e) for(int i = k; k < n ? i < n : i > n; k < n ? i += e : i -= e)
#define si(x)  scanf("%d",&x)
#define sl(x)  scanf("%lld",&x)
#define ss(s)  scanf("%s",s)
#define pi(x)  printf("%d\n",x)
#define pl(x)  printf("%lld\n",x)
#define ps(s)  printf("%s\n",s)
#define pis(x)  printf("%d ",x)
#define pls(x)  printf("%lld ",x)
#define pss(s)  printf("%s ",s)
#define newline ps("");
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define iter(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define debug(x) cout << #x << "=" << x << endl
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll>   pl;
typedef vector<int>    vi;
typedef vector<ll>     vl;
typedef vector<pii>    vpii;
typedef vector<pl>     vpl;
typedef vector<vi>     vvi;
typedef vector<vl>     vvl;


const int mod = 1'000'000'007;

void in_vec(vi &v, int n);
void out_vec(vi v, int n);
void in_mat(vector<vi> &v, int m, int n);
void out_mat(vector<vi> &v, int m, int n);

// ----------------------------------------------------- 

// Time complexity O(n)
void reverseArray(vi &vec, int n) {
    int start = 0, end = n - 1;
    while(start < end) {
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;
        start++;
        end--;
    }
}

// Time complexity O(n)
void reverseArrayRecursive(vi &vec, int n, int start, int end) {
    if(start >= end) return;
    int temp = vec[start];
    vec[start] = vec[end];
    vec[end] = temp;  
    reverseArrayRecursive(vec, n, start + 1, end - 1);
}

void solve() {
    int n;
    si(n);
    vi vec(n);
    in_vec(vec, n);
    // reverseArray(vec, n); 
    // reverseArrayRecursive(vec, n, 0, n - 1);
    reverse(vec.begin(), vec.end()); // O(n)
    out_vec(vec, n);
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    si(t);
    while(t--) {
        solve();
    }

    return 0;
}

void in_vec(vi &v, int n) {
    fo(i, n) si(v[i]);
}

void out_vec(vi v, int n) {
    fo(i, n) pis(v[i]);
    newline;
}

void in_mat(vvi &v, int m, int n) {
    fo(i, m) {
        fo(j, n) si(v[i][j]);
    }
}

void out_mat(vvi &v, int m, int n) {
    fo(i, m) {
        fo(j, n) pis(v[i][j]);
        newline;
    }
}