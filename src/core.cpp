// Auto-generated module | 2026-05-12T21:34:29.032840
#include <iostream>
#include <vector>

int compute_685() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
