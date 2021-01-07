// Auto-generated module | 2026-05-12T20:35:35.264444
#include <iostream>
#include <vector>

int compute_509() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
