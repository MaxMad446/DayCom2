// Auto-generated module | 2026-05-13T20:58:30.287344
#include <iostream>
#include <vector>

int compute_789() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
