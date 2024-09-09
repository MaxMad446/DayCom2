// Auto-generated module | 2026-05-12T03:38:11.424688
#include <iostream>
#include <vector>

int compute_805() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
