// Auto-generated module | 2026-05-12T03:40:33.879217
#include <iostream>
#include <vector>

int compute_479() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
