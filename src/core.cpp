// Auto-generated module | 2026-05-12T21:11:43.174896
#include <iostream>
#include <vector>

int compute_111() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
