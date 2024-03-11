// Auto-generated module | 2026-05-14T18:22:53.174276
#include <iostream>
#include <vector>

int compute_227() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
