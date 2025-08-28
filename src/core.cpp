// Auto-generated module | 2026-05-12T04:24:19.710202
#include <iostream>
#include <vector>

int compute_848() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
