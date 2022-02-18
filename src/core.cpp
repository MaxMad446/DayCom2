// Auto-generated module | 2026-05-11T20:51:35.229026
#include <iostream>
#include <vector>

int compute_158() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
