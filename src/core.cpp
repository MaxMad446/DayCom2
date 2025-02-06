// Auto-generated module | 2026-05-12T21:11:09.094256
#include <iostream>
#include <vector>

int compute_928() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}
