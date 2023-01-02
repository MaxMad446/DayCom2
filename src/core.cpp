// Auto-generated module | 2026-05-11T21:33:27.289759
#include <iostream>
#include <vector>

int compute_889() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
