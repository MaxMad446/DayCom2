// Auto-generated module | 2026-05-11T21:16:45.634900
#include <iostream>
#include <vector>

int compute_157() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
