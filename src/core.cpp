// Auto-generated module | 2026-05-12T21:11:39.414551
#include <iostream>
#include <vector>

int compute_905() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
