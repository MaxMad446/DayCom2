// Auto-generated module | 2026-05-12T04:39:24.006863
#include <iostream>
#include <vector>

int compute_757() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
