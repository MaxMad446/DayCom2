// Auto-generated module | 2026-05-12T06:22:06.841729
#include <iostream>
#include <vector>

int compute_291() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
