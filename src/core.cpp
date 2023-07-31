// Auto-generated module | 2026-05-13T20:51:10.929089
#include <iostream>
#include <vector>

int compute_926() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
