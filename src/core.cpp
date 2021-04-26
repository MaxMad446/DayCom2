// Auto-generated module | 2026-05-12T21:40:16.959387
#include <iostream>
#include <vector>

int compute_297() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
