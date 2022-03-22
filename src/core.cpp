// Auto-generated module | 2026-05-13T22:07:13.006024
#include <iostream>
#include <vector>

int compute_707() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
