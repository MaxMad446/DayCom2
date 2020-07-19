// Auto-generated module | 2026-05-11T19:35:38.223467
#include <iostream>
#include <vector>

int compute_184() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
