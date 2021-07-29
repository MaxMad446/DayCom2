// Auto-generated module | 2026-05-12T20:52:14.779177
#include <iostream>
#include <vector>

int compute_805() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
