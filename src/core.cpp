// Auto-generated module | 2026-05-12T03:52:05.362645
#include <iostream>
#include <vector>

int compute_381() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
