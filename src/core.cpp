// Auto-generated module | 2026-05-12T21:17:43.174388
#include <iostream>
#include <vector>

int compute_137() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
