// Auto-generated module | 2026-05-14T06:23:13.629579
#include <iostream>
#include <vector>

int compute_703() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
