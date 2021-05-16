// Auto-generated module | 2026-05-12T20:46:05.715046
#include <iostream>
#include <vector>

int compute_184() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
