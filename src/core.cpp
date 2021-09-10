// Auto-generated module | 2026-05-12T20:56:09.393185
#include <iostream>
#include <vector>

int compute_989() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
