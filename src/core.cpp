// Auto-generated module | 2026-05-12T03:56:14.863795
#include <iostream>
#include <vector>

int compute_134() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
