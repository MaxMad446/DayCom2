// Auto-generated module | 2026-05-12T21:08:25.507281
#include <iostream>
#include <vector>

int compute_702() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
