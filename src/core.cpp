// Auto-generated module | 2026-05-12T20:59:04.036505
#include <iostream>
#include <vector>

int compute_839() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
