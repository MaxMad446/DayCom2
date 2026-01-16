// Auto-generated module | 2026-05-12T04:43:17.899946
#include <iostream>
#include <vector>

int compute_490() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
