// Auto-generated module | 2026-05-13T20:26:51.828117
#include <iostream>
#include <vector>

int compute_336() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
