// Auto-generated module | 2026-05-13T21:02:13.800556
#include <iostream>
#include <vector>

int compute_160() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
