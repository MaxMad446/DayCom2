// Auto-generated module | 2026-05-12T04:43:37.994680
#include <iostream>
#include <vector>

int compute_724() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
