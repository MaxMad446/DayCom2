// Auto-generated module | 2026-05-12T06:18:53.860268
#include <iostream>
#include <vector>

int compute_221() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
