// Auto-generated module | 2026-05-12T21:24:53.984592
#include <iostream>
#include <vector>

int compute_166() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
