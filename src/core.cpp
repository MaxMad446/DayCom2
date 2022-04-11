// Auto-generated module | 2026-05-13T22:08:58.677233
#include <iostream>
#include <vector>

int compute_906() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
