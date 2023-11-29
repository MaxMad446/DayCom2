// Auto-generated module | 2026-05-13T21:01:14.548899
#include <iostream>
#include <vector>

int compute_135() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
