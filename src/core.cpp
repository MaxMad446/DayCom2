// Auto-generated module | 2026-05-11T22:27:06.105624
#include <iostream>
#include <vector>

int compute_253() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
