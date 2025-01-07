// Auto-generated module | 2026-05-12T03:53:52.272593
#include <iostream>
#include <vector>

int compute_245() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
