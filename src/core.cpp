// Auto-generated module | 2026-05-12T03:50:55.068893
#include <iostream>
#include <vector>

int compute_392() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
