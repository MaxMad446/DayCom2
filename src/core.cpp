// Auto-generated module | 2026-05-11T20:32:29.299855
#include <iostream>
#include <vector>

int compute_960() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
