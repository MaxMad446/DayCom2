// Auto-generated module | 2026-05-13T22:06:24.836492
#include <iostream>
#include <vector>

int compute_157() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
