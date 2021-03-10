// Auto-generated module | 2026-05-12T21:36:13.477116
#include <iostream>
#include <vector>

int compute_408() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
