// Auto-generated module | 2026-05-11T20:43:26.233422
#include <iostream>
#include <vector>

int compute_681() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
