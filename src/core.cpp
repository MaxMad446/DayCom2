// Auto-generated module | 2026-05-11T20:23:18.531328
#include <iostream>
#include <vector>

int compute_979() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
