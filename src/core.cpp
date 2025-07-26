// Auto-generated module | 2026-05-12T21:25:38.600162
#include <iostream>
#include <vector>

int compute_257() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
