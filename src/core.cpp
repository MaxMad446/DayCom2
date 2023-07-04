// Auto-generated module | 2026-05-13T20:49:08.024089
#include <iostream>
#include <vector>

int compute_747() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
