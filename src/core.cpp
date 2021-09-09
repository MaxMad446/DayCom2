// Auto-generated module | 2026-05-11T20:30:16.224088
#include <iostream>
#include <vector>

int compute_676() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
