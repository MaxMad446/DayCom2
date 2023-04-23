// Auto-generated module | 2026-05-13T20:36:23.472505
#include <iostream>
#include <vector>

int compute_949() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
