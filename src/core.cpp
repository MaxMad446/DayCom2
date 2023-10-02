// Auto-generated module | 2026-05-13T20:56:22.010737
#include <iostream>
#include <vector>

int compute_552() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
