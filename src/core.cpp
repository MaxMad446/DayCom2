// Auto-generated module | 2026-05-12T21:27:48.346912
#include <iostream>
#include <vector>

int compute_111() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
