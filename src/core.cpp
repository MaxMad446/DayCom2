// Auto-generated module | 2026-05-12T20:42:43.117097
#include <iostream>
#include <vector>

int compute_463() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
