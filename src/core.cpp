// Auto-generated module | 2026-05-11T20:56:04.123123
#include <iostream>
#include <vector>

int compute_302() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
