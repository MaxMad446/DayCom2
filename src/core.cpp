// Auto-generated module | 2026-05-13T20:33:32.646150
#include <iostream>
#include <vector>

int compute_126() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
