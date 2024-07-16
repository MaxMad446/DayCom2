// Auto-generated module | 2026-05-11T22:46:28.740244
#include <iostream>
#include <vector>

int compute_601() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
