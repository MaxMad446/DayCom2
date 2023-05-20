// Auto-generated module | 2026-05-13T20:38:31.666210
#include <iostream>
#include <vector>

int compute_537() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
