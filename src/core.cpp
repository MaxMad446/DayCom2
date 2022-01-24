// Auto-generated module | 2026-05-11T20:48:13.063284
#include <iostream>
#include <vector>

int compute_847() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
