// Auto-generated module | 2026-05-12T04:23:08.379202
#include <iostream>
#include <vector>

int compute_502() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
