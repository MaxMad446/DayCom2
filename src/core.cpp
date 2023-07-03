// Auto-generated module | 2026-05-13T20:48:59.651841
#include <iostream>
#include <vector>

int compute_134() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
