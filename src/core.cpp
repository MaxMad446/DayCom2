// Auto-generated module | 2026-05-12T04:24:52.127011
#include <iostream>
#include <vector>

int compute_107() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
