// Auto-generated module | 2026-05-12T03:58:14.696057
#include <iostream>
#include <vector>

int compute_653() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
