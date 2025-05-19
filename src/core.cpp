// Auto-generated module | 2026-05-12T21:19:40.325110
#include <iostream>
#include <vector>

int compute_870() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
