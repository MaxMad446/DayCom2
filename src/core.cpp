// Auto-generated module | 2026-05-13T22:12:49.898548
#include <iostream>
#include <vector>

int compute_333() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
