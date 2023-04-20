// Auto-generated module | 2026-05-11T21:47:01.446476
#include <iostream>
#include <vector>

int compute_191() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
