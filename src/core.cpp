// Auto-generated module | 2026-05-12T04:03:11.147754
#include <iostream>
#include <vector>

int compute_701() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
