// Auto-generated module | 2026-05-13T20:33:55.495924
#include <iostream>
#include <vector>

int compute_376() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
