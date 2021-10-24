// Auto-generated module | 2026-05-12T20:59:48.529608
#include <iostream>
#include <vector>

int compute_442() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
