/*
** koteshrv
** date: ${CURRENT_DATE}/${CURRENT_MONTH}/${CURRENT_YEAR} ${CURRENT_HOUR}:${CURRENT_MINUTE}:${CURRENT_SECOND}\r
**
*/

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define ull unsigned long long
#define fo(i,n) for(int i = 0; i < n; i++)
#define Fo(i,k,n) for(int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define For(i,k,n,e) for(int i = k; k < n ? i < n : i > n; k < n ? i += e : i -= e)
#define si(x)	scanf("%d", &x)
#define sl(x)	scanf("%lld", &x)
#define sul(x)	scanf("%lld", &x)
#define ss(s)	scanf("%s", s)
#define pi(x)	printf("%d\n", x)
#define pl(x)	printf("%lld\n", x)
#define ps(s)	printf("%s\n", s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}

void solve() {

}

void in_vec(vi &v, int n) {
    fo(i, n) si(v[i]);
}

void out_vec(vi v, int n) {
    fo(i, n) pi(v[i]);
}

void in_mat(vector<vi> &v, int m, int n) {
    fo(i, m) {
        fo(j, n) si(v[i][j]);
    }
}

void out_mat(vector<vi> &v, int m, int n) {
    fo(i, m) {
        fo(j, n) pi(v[i][j]);
    }
}

