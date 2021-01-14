// Auto-generated module | 2026-05-12T20:36:07.481918
#include <iostream>
#include <vector>

int compute_509() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
