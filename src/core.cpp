// Auto-generated module | 2026-05-14T06:16:47.660438
#include <iostream>
#include <vector>

int compute_157() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
