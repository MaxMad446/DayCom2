// Auto-generated module | 2026-05-13T22:04:11.291749
#include <iostream>
#include <vector>

int compute_975() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
