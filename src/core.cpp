// Auto-generated module | 2026-05-13T22:08:18.008412
#include <iostream>
#include <vector>

int compute_167() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
