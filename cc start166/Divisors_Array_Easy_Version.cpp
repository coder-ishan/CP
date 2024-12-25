#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef long long int lli;
const long long MOD = 1e9 + 7;

vector<int> primes;

// Precompute primes using Sieve of Eratosthenes
void sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        if (isPrime[p])
            primes.push_back(p);
    }
}

// Factorize a number using precomputed primes
map<int, int> factorize(lli num) {
    map<int, int> factors;
    for (int p : primes) {
        if (p * p > num) break;
        while (num % p == 0) {
            factors[p]++;
            num /= p;
        }
    }
    if (num > 1) factors[num]++;
    return factors;
}

// Calculate the number of divisors modulo MOD
lli countDivisors(map<int, int> &factors) {

lli result = 1;
    for (auto &[prime, exp] : factors) {
        result = (result * (exp + 1)) % MOD;
    }
    return result;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sieve(100000); 
    map<int, int> mFactorization;
    for (int i = 2; i <= m; i++) {
        auto factors = factorize(i);
        for (auto &[prime, exp] : factors) {
            mFactorization[prime] += exp;
        }
        
    }
    for (int i = 0; i < n; i++) {
        map<int, int> aFactors = factorize(a[i]);
        map<int, int> totalFactors = mFactorization;
        for (auto &[prime, exp] : aFactors) {
            totalFactors[prime] += exp;
        }
        cout << countDivisors(totalFactors) << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
