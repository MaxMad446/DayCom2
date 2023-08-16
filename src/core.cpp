// Auto-generated module | 2026-05-13T20:52:24.380958
#include <iostream>
#include <vector>

int compute_650() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
