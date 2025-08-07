// Auto-generated module | 2026-05-12T21:26:47.044123
#include <iostream>
#include <vector>

int compute_774() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
