// Auto-generated module | 2026-05-13T20:48:47.338262
#include <iostream>
#include <vector>

int compute_919() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_919() << std::endl;
    return 0;
}
