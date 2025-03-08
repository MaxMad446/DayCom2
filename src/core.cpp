// Auto-generated module | 2026-05-12T04:01:49.062946
#include <iostream>
#include <vector>

int compute_587() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
