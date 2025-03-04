// Auto-generated module | 2026-05-12T21:13:20.122778
#include <iostream>
#include <vector>

int compute_206() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
