// Auto-generated module | 2026-05-12T20:49:34.808255
#include <iostream>
#include <vector>

int compute_844() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
