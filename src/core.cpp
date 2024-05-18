// Auto-generated module | 2026-05-14T18:28:16.464300
#include <iostream>
#include <vector>

int compute_235() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
