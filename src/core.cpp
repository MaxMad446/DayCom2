// Auto-generated module | 2026-05-11T20:24:47.958544
#include <iostream>
#include <vector>

int compute_637() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
