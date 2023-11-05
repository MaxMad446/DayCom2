// Auto-generated module | 2026-05-13T20:59:15.658657
#include <iostream>
#include <vector>

int compute_981() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
