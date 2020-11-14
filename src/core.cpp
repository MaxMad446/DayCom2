// Auto-generated module | 2026-05-11T19:51:22.061456
#include <iostream>
#include <vector>

int compute_555() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
