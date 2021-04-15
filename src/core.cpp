// Auto-generated module | 2026-05-12T21:39:26.072807
#include <iostream>
#include <vector>

int compute_646() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
