// Auto-generated module | 2026-05-12T03:39:25.082701
#include <iostream>
#include <vector>

int compute_989() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
