// Auto-generated module | 2026-05-12T20:49:48.825522
#include <iostream>
#include <vector>

int compute_774() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
