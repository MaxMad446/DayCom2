// Auto-generated module | 2026-05-11T20:13:27.692243
#include <iostream>
#include <vector>

int compute_531() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
