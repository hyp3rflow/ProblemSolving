#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

#define fup(i, a, b, c) for (int(i) = (a); (i) <= (b); (i) += (c))
#define fdn(i, a, b, c) for (int(i) = (a); (i) >= (b); (i) -= (c))
#define endl "\n"

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const ll MOD = 1e9 + 7;
const int stMAX = 1 << 18;
const int INF = 1e9;
int N, M, tmp, arr[1030][1030], dp[1030][1030];
int x1, Y1, x2, y2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    fup(i, 1, N, 1) {
        fup(j, 1, N, 1) {
            cin >> arr[i][j];
            dp[i][j] = arr[i][j];
        }
    }

    fup(i, 1, N, 1) {
        fup(j, 1, N, 1) {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }

    fup(i, 1, M, 1) {
        cin >> x1 >> Y1 >> x2 >> y2;
        cout << dp[x2][y2] + dp[x1 - 1][Y1 - 1] - dp[x1 - 1][y2] - dp[x2][Y1 - 1] << endl;
    }
}