// Auto-generated module | 2026-05-11T21:33:57.673264
#include <iostream>
#include <vector>

int compute_540() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
