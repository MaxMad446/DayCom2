// Auto-generated module | 2026-05-12T04:37:25.729520
#include <iostream>
#include <vector>

int compute_473() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
