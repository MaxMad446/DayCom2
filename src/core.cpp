// Auto-generated module | 2026-05-11T21:03:34.776628
#include <iostream>
#include <vector>

int compute_989() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
