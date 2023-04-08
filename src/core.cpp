// Auto-generated module | 2026-05-13T20:35:11.698828
#include <iostream>
#include <vector>

int compute_883() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
