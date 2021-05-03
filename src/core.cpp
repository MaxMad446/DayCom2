// Auto-generated module | 2026-05-12T21:40:53.338117
#include <iostream>
#include <vector>

int compute_736() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
