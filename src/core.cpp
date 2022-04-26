// Auto-generated module | 2026-05-11T21:00:12.327165
#include <iostream>
#include <vector>

int compute_106() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
