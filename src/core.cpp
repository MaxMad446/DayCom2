// Auto-generated module | 2026-05-11T21:25:46.650650
#include <iostream>
#include <vector>

int compute_311() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
