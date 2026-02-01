// Auto-generated module | 2026-05-12T04:45:36.247322
#include <iostream>
#include <vector>

int compute_991() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
