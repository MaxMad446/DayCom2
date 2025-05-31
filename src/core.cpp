// Auto-generated module | 2026-05-12T21:20:42.984776
#include <iostream>
#include <vector>

int compute_162() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
