// Auto-generated module | 2026-05-12T04:17:35.763445
#include <iostream>
#include <vector>

int compute_359() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
