// Auto-generated module | 2026-05-13T20:34:03.225706
#include <iostream>
#include <vector>

int compute_850() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
