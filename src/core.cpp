// Auto-generated module | 2026-05-11T20:57:33.141361
#include <iostream>
#include <vector>

int compute_582() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
