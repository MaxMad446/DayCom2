// Auto-generated module | 2026-05-13T22:09:16.450340
#include <iostream>
#include <vector>

int compute_931() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
