#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

vector<long long> memo(51, -1); 

long long fibonacci(int x) {
    if (x == 0) return 0;
    if (x == 1) return 1;
    if (memo[x] != -1) return memo[x]; 
    return memo[x] = fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
