// Auto-generated module | 2026-05-11T22:40:00.683520
#include <iostream>
#include <vector>

int compute_854() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
