// Auto-generated module | 2026-05-11T22:46:21.563078
#include <iostream>
#include <vector>

int compute_309() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
