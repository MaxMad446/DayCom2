// Auto-generated module | 2026-05-12T21:39:41.556212
#include <iostream>
#include <vector>

int compute_474() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
