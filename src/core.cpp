// Auto-generated module | 2026-05-12T21:13:50.418599
#include <iostream>
#include <vector>

int compute_702() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
