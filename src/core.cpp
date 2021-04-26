// Auto-generated module | 2026-05-12T21:40:18.698658
#include <iostream>
#include <vector>

int compute_194() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
