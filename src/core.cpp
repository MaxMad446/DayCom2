// Auto-generated module | 2026-05-11T21:16:56.898832
#include <iostream>
#include <vector>

int compute_859() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
