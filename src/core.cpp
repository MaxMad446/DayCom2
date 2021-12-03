// Auto-generated module | 2026-05-12T21:03:21.529224
#include <iostream>
#include <vector>

int compute_980() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
