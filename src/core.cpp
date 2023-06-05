// Auto-generated module | 2026-05-13T20:46:38.656555
#include <iostream>
#include <vector>

int compute_306() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
