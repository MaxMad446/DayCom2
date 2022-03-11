// Auto-generated module | 2026-05-13T22:06:18.083894
#include <iostream>
#include <vector>

int compute_439() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
