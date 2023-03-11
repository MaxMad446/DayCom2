// Auto-generated module | 2026-05-11T21:41:59.509246
#include <iostream>
#include <vector>

int compute_695() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
