// Auto-generated module | 2026-05-12T21:04:18.417443
#include <iostream>
#include <vector>

int compute_583() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
