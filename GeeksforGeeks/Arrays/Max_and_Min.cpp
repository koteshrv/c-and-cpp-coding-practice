/*
** koteshrv
** date: 03/05/2021 23:09:21
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

struct Pair {
    int min, max;
};

// Simple linear search
struct Pair getMinMaxLinearSearch(vi vec, int n) {
    struct Pair minmax;
    minmax.min = INT_MAX;
    minmax.max = INT_MIN;
    fo(i, n) {
        if(vec[i] > minmax.max) minmax.max = vec[i];
        if(vec[i] < minmax.min) minmax.min = vec[i];
    }
    return minmax;
}

// Tournament method
// Paradigm: Divide and Conquer
struct Pair getMinMaxTournamentMethod(vi vec, int low, int high) {
    struct Pair minmax, minmaxleft, minmaxright;
    int mid;

    // If there is only one element
    if(low == high) {
        minmax.min = minmax.max = vec[low];
        return minmax;
    }

    // If there are two elements left
    if(high == low + 1) {
        vec[low] > vec[high] ? minmax.max = vec[low], minmax.min = vec[high] : minmax.max = vec[high], minmax.min = vec[low];
        return minmax;
    }

    // If there are more than two elements
    mid = low + (high - low) / 2;
    minmaxleft = getMinMaxTournamentMethod(vec, low, mid);
    minmaxright = getMinMaxTournamentMethod(vec, mid + 1, high);

    minmaxleft.min > minmaxright.min ? minmax.min = minmaxright.min : minmax.min = minmaxleft.min;
    minmaxleft.max > minmaxright.max ? minmax.max = minmaxleft.max : minmax.max = minmaxright.max;

    return minmax;
}

// Compare in pairs O(n)
struct Pair getMinMaxCompareInPairs(vi vec, int n) {
    struct Pair minmax;
    int i;

    if(n % 2) {
        minmax.min = minmax.max = vec[0];
        i = 1;
    }

    else {
        vec[0] > vec[1] ? minmax.max = vec[0], minmax.min = vec[1] : minmax.max = vec[1], minmax.min = vec[0];
        i = 2;
    }

    while(i < n - 1) {
        if(vec[i] > vec[i + 1]) {
            if(vec[i] > minmax.max) minmax.max = vec[i];
            if(vec[i + 1] < minmax.min) minmax.min = vec[i + 1];
        }
        else {
            if(vec[i + 1] > minmax.max) minmax.max = vec[i + 1];
            if(vec[i] < minmax.min) minmax.min = vec[i];
        }
        i += 2;
    }
    return minmax;
}

void solve() {
    int n;
    si(n);
    vi vec(n);
    in_vec(vec, n);
    struct Pair minmax = getMinMaxCompareInPairs(vec, n);
    debug2(minmax.min, minmax.max);
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