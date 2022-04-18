// Auto-generated module | 2026-05-11T20:59:02.673157
#include <iostream>
#include <vector>

int compute_664() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
