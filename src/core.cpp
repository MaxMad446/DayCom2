// Auto-generated module | 2026-05-12T04:27:11.650602
#include <iostream>
#include <vector>

int compute_730() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
