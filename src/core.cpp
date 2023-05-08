// Auto-generated module | 2026-05-11T21:49:23.833726
#include <iostream>
#include <vector>

int compute_351() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
