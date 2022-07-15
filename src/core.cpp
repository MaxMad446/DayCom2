// Auto-generated module | 2026-05-14T06:14:53.283501
#include <iostream>
#include <vector>

int compute_446() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
