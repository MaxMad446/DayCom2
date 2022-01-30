// Auto-generated module | 2026-05-13T22:02:56.603564
#include <iostream>
#include <vector>

int compute_425() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
