// Auto-generated module | 2026-05-13T22:02:54.217862
#include <iostream>
#include <vector>

int compute_884() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
