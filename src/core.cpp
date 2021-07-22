// Auto-generated module | 2026-05-11T20:23:56.329400
#include <iostream>
#include <vector>

int compute_552() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
