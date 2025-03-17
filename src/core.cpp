// Auto-generated module | 2026-05-12T04:02:50.652280
#include <iostream>
#include <vector>

int compute_710() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
