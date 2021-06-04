// Auto-generated module | 2026-05-11T20:17:22.912872
#include <iostream>
#include <vector>

int compute_695() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
