// Auto-generated module | 2026-05-12T21:26:01.226304
#include <iostream>
#include <vector>

int compute_563() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
