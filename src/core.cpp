// Auto-generated module | 2026-05-12T04:25:03.812163
#include <iostream>
#include <vector>

int compute_258() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
