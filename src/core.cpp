// Auto-generated module | 2026-05-11T20:57:46.621788
#include <iostream>
#include <vector>

int compute_177() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
