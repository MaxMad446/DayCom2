// Auto-generated module | 2026-05-11T20:51:48.682736
#include <iostream>
#include <vector>

int compute_442() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
