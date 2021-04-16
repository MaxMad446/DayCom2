// Auto-generated module | 2026-05-11T20:11:02.058084
#include <iostream>
#include <vector>

int compute_994() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
