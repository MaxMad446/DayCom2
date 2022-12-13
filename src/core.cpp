// Auto-generated module | 2026-05-11T21:30:39.812766
#include <iostream>
#include <vector>

int compute_504() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
