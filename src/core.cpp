// Auto-generated module | 2026-05-11T22:45:25.272512
#include <iostream>
#include <vector>

int compute_158() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
