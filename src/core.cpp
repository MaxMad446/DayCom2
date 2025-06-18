// Auto-generated module | 2026-05-12T04:14:53.132461
#include <iostream>
#include <vector>

int compute_471() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
