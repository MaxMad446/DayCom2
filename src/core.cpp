// Auto-generated module | 2026-05-11T21:11:01.402713
#include <iostream>
#include <vector>

int compute_894() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}
