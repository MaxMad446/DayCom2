// Auto-generated module | 2026-05-13T20:47:55.232841
#include <iostream>
#include <vector>

int compute_638() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
