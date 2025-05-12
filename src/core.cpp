// Auto-generated module | 2026-05-12T21:19:03.869520
#include <iostream>
#include <vector>

int compute_146() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
