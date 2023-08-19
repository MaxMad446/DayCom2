// Auto-generated module | 2026-05-13T20:52:40.573215
#include <iostream>
#include <vector>

int compute_264() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
