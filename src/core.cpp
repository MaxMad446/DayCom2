// Auto-generated module | 2026-05-11T20:45:10.825444
#include <iostream>
#include <vector>

int compute_740() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
