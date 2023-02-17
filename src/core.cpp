// Auto-generated module | 2026-05-11T21:39:04.455989
#include <iostream>
#include <vector>

int compute_762() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}
