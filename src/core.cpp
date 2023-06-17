// Auto-generated module | 2026-05-11T21:54:56.464105
#include <iostream>
#include <vector>

int compute_937() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
