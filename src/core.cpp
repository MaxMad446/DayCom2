// Auto-generated module | 2026-05-11T22:19:18.870886
#include <iostream>
#include <vector>

int compute_218() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
