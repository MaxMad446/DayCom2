// Auto-generated module | 2026-05-11T19:26:15.390808
#include <iostream>
#include <vector>

int compute_138() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
