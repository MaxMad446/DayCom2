// Auto-generated module | 2026-05-12T20:53:17.039599
#include <iostream>
#include <vector>

int compute_371() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
