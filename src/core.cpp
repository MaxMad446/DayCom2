// Auto-generated module | 2026-05-12T21:22:34.421127
#include <iostream>
#include <vector>

int compute_353() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
