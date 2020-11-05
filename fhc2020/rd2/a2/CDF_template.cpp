#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
#define N 1000000007

void update(long long l, long long w, long long h, vl& interval_l, vl& interval_r, long long& p, long long& ans){
    if (interval_r.size() == 0) {
        p = ((w + h) * 2) % N;
        interval_r.push_back(l+w);
        interval_l.push_back(l);
    }
    else{
        

    }
    cout << p << endl;
    ans = (ans * p) % N;
}

int main(){
    triche;
    int T;
    int t;
    cin >> t;
    T = t;
    while (t--){
        // INPUT N/K
        long long n, k;
        cin >> n >> k;
        long long p = 0, ans = 1;
        // INPUT L1-K
        vl L(k);
        for (int i = 0; i < k; i++){
            cin >> L[i];
        }
        long long al, bl, cl, dl;
        cin >> al >> bl >> cl >> dl;
        // INPUT W1-K
        vl W(k);
        for (int i = 0; i < k; i++){
            cin >> W[i];
        }
        long long aw, bw, cw, dw;
        cin >> al >> bl >> cl >> dl;
        // INPUT H1-K
        vl H(k);
        for (int i = 0; i < k; i++){
            cin >> H[i];
        }
        long long ah, bh, ch, dh;
        cin >> ah >> bh >> ch >> dh;

        long long l_last_last = 0;
        long long l_last = 0;
        long long l;
        long long w_last_last = 0;
        long long w_last = 0;
        long long w;
        long long h_last_last = 0;
        long long h_last = 0;
        long long h;
        vl interval_l;
        vl interval_r;

        for (int i = 0; i < k; i++){
            l = L[i];
            w = W[i];
            h = H[i];
            update(l, w, h, interval_l, interval_r, p, ans);
            l_last_last = l_last;
            l_last = l;
            w_last_last = w_last;
            w_last = w;
            h_last_last = h_last;
            h_last = h;
        }
        for (int i = k; i < n; i++){
            l = 1 + ((al * l_last_last + bl * l_last + cl) % dl);
            w = 1 + ((aw * w_last_last + bw * w_last + cw) % dw);
            h = 1 + ((ah * h_last_last + bh * h_last + ch) % dh);
            update(l, w, h, interval_l, interval_r, p, ans);
            l_last_last = l_last;
            l_last = l;
            w_last_last = w_last;
            w_last = w;
            h_last_last = h_last;
            h_last = h;
        }
        cout << "Case #" << T - t << ":" << ans << endl;
    }
    return 0;
}
