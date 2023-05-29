// Auto-generated module | 2026-05-11T21:52:29.583213
#include <iostream>
#include <vector>

int compute_473() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
