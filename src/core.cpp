// Auto-generated module | 2026-05-13T22:07:54.457316
#include <iostream>
#include <vector>

int compute_922() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
