// Auto-generated module | 2026-05-12T21:13:16.972321
#include <iostream>
#include <vector>

int compute_455() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
