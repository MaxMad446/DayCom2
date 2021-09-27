// Auto-generated module | 2026-05-11T20:32:27.760723
#include <iostream>
#include <vector>

int compute_664() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
