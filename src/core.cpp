// Auto-generated module | 2026-05-12T04:41:39.048978
#include <iostream>
#include <vector>

int compute_907() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
