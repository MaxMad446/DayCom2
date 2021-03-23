// Auto-generated module | 2026-05-12T21:37:14.323313
#include <iostream>
#include <vector>

int compute_854() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
