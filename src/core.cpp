// Auto-generated module | 2026-05-13T20:48:27.728918
#include <iostream>
#include <vector>

int compute_579() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
