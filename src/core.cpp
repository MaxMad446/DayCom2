// Auto-generated module | 2026-05-12T04:37:51.993309
#include <iostream>
#include <vector>

int compute_113() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
