// Auto-generated module | 2026-05-12T04:25:30.423123
#include <iostream>
#include <vector>

int compute_220() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
