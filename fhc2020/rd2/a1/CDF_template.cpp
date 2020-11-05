#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
#define N 1000000007

void update(long long w, long long l, deque<long long>& l_lasts, long long h, deque<long long>& h_lasts, long long& p, long long& ans){
    if (l_lasts.empty()){
        p = (p + 2 * h + 2 * w) % N;
    }
    else{
        while (!l_lasts.empty()){
            if (l - l_lasts.front() > w){
                l_lasts.pop_front();
                h_lasts.pop_front();
            }
            else{
                break;
            }
        }
        if (l_lasts.empty()){
            p = (p + 2 * h + 2 * w) % N;
        }
        else{
            long long h_max = 0;
            for (auto h: h_lasts){
                h_max = max(h, h_max);
            }
            if (h >= h_max){
                p= (p + 2 * (l - l_lasts.back()) + 2 * (h - h_max)) % N;
            }
            else{
                p = (p + 2 * (l - l_lasts.back())) % N;
            }
        }
    }
    l_lasts.push_back(l);
    h_lasts.push_back(h);
    //cout << p << ' ' << l_lasts.size()<< endl;
    ans = (ans * p) % N;
}

int main(){
    triche;
    int T;
    int t;
    cin >> t;
    T = t;
    while (t--){
        long long n, k, w;
        cin >> n >> k >> w;
        long long p = 0, ans = 1;
        vl L(k);
        for (int i = 0; i < k; i++){
            cin >> L[i];
        }
        long long al, bl, cl, dl;
        cin >> al >> bl >> cl >> dl;
        vl H(k);
        for (int i = 0; i < k; i++){
            cin >> H[i];
        }
        long long ah, bh, ch, dh;
        cin >> ah >> bh >> ch >> dh;

        deque<long long> l_lasts;
        deque<long long> h_lasts;
        long long l_last_last = 0;
        long long h_last_last = 0;
        long long l_last = 0;
        long long h_last = 0;
        long long l;
        long long h;

        for (int i = 0; i < k; i++){
            l = L[i];
            h = H[i];
            update(w, l, l_lasts, h, h_lasts, p, ans);
            l_last_last = l_last;
            l_last = l;
            h_last_last = h_last;
            h_last = h;
        }
        for (int i = k; i < n; i++){
            l = 1 + ((al * l_last_last + bl * l_last + cl) % dl);
            h = 1 + ((ah * h_last_last + bh * h_last + ch) % dh);
            update(w, l, l_lasts, h, h_lasts, p, ans);
            l_last_last = l_last;
            l_last = l;
            h_last_last = h_last;
            h_last = h;
        }
        cout << "Case #" << T - t << ":" << ans << endl;
    }
    return 0;
}
