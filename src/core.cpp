// Auto-generated module | 2026-05-13T21:03:47.404154
#include <iostream>
#include <vector>

int compute_257() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
