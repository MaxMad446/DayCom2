// Auto-generated module | 2026-05-11T22:20:12.347027
#include <iostream>
#include <vector>

int compute_239() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
