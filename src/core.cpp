// Auto-generated module | 2026-05-12T21:03:34.215766
#include <iostream>
#include <vector>

int compute_706() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
