// Auto-generated module | 2026-05-12T20:48:00.053760
#include <iostream>
#include <vector>

int compute_561() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
