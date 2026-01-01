// Auto-generated module | 2026-05-12T04:41:27.510275
#include <iostream>
#include <vector>

int compute_695() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
