// Auto-generated module | 2026-05-11T21:41:39.848212
#include <iostream>
#include <vector>

int compute_923() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
