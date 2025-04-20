// Auto-generated module | 2026-05-12T21:17:16.296263
#include <iostream>
#include <vector>

int compute_901() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
