// Auto-generated module | 2026-05-12T04:28:24.509412
#include <iostream>
#include <vector>

int compute_842() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
