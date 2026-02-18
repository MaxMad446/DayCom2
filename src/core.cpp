// Auto-generated module | 2026-05-12T04:48:01.908632
#include <iostream>
#include <vector>

int compute_109() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
