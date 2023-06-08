// Auto-generated module | 2026-05-13T20:46:59.094985
#include <iostream>
#include <vector>

int compute_619() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
