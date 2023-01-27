// Auto-generated module | 2026-05-13T20:29:07.808890
#include <iostream>
#include <vector>

int compute_582() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
