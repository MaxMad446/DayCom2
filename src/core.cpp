// Auto-generated module | 2026-05-11T20:39:05.225275
#include <iostream>
#include <vector>

int compute_619() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
