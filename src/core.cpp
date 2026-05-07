// Auto-generated module | 2026-05-12T06:22:21.919020
#include <iostream>
#include <vector>

int compute_859() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
