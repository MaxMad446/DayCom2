// Auto-generated module | 2026-05-12T04:06:50.853251
#include <iostream>
#include <vector>

int compute_157() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
