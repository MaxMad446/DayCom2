// Auto-generated module | 2026-05-11T22:38:18.324832
#include <iostream>
#include <vector>

int compute_367() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
