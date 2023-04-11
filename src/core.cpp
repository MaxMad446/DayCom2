// Auto-generated module | 2026-05-13T20:35:25.328603
#include <iostream>
#include <vector>

int compute_488() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
