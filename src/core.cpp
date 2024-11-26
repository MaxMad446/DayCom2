// Auto-generated module | 2026-05-12T03:48:10.413914
#include <iostream>
#include <vector>

int compute_511() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
