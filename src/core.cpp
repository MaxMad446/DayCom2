// Auto-generated module | 2026-05-13T22:06:14.820038
#include <iostream>
#include <vector>

int compute_341() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
