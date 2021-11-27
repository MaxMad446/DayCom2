// Auto-generated module | 2026-05-12T21:02:51.785635
#include <iostream>
#include <vector>

int compute_560() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
