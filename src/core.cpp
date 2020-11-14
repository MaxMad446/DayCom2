// Auto-generated module | 2026-05-12T19:59:27.980137
#include <iostream>
#include <vector>

int compute_185() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
