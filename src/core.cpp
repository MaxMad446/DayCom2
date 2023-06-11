// Auto-generated module | 2026-05-13T20:47:14.688973
#include <iostream>
#include <vector>

int compute_405() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
