// Auto-generated module | 2026-05-12T21:03:45.922788
#include <iostream>
#include <vector>

int compute_743() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
