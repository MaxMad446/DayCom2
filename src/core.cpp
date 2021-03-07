// Auto-generated module | 2026-05-12T20:40:21.735510
#include <iostream>
#include <vector>

int compute_206() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
