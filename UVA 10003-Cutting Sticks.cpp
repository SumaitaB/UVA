#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;

int l, n, c[55], dp[55][55];

int recurse(int left, int right) {
	if(dp[left][right] != -1) return dp[left][right];

	if(left + 1 == right) return dp[left][right] = 0;
	int best = 1000000;
	for(int i = left + 1; i < right; i++) {
		best = min(best, recurse(left, i) + recurse(i, right) + c[right] - c[left]);
	}
	return dp[left][right] = best;
}

int main() {
	for(;;) {
		scanf("%d", &l);
		if(l == 0) break;
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) scanf("%d", &c[i]);
		c[0] = 0; c[n + 1] = l;

		memset(dp, -1, sizeof dp);

		printf("The minimum cutting is %d.\n", recurse(0, n + 1));
	}
}
