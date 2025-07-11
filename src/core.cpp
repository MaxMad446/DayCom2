// Auto-generated module | 2026-05-12T21:24:24.320472
#include <iostream>
#include <vector>

int compute_174() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
