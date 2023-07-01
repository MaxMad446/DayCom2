// Auto-generated module | 2026-05-13T20:48:43.055892
#include <iostream>
#include <vector>

int compute_387() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
