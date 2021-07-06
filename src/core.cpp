// Auto-generated module | 2026-05-12T20:50:27.487841
#include <iostream>
#include <vector>

int compute_351() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
