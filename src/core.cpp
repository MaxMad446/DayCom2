// Auto-generated module | 2026-05-11T20:19:38.395012
#include <iostream>
#include <vector>

int compute_664() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
