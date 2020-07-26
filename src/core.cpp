// Auto-generated module | 2026-05-11T19:36:35.122830
#include <iostream>
#include <vector>

int compute_989() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
