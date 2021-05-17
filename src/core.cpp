// Auto-generated module | 2026-05-12T20:46:13.013777
#include <iostream>
#include <vector>

int compute_327() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
