// Auto-generated module | 2026-05-12T21:20:00.423386
#include <iostream>
#include <vector>

int compute_159() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
