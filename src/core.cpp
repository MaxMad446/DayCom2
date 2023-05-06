// Auto-generated module | 2026-05-13T20:37:26.618861
#include <iostream>
#include <vector>

int compute_215() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
