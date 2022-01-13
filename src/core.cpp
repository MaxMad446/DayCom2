// Auto-generated module | 2026-05-13T22:01:32.130983
#include <iostream>
#include <vector>

int compute_241() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
