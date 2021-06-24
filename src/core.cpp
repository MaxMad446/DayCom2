// Auto-generated module | 2026-05-12T20:49:27.728724
#include <iostream>
#include <vector>

int compute_980() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
