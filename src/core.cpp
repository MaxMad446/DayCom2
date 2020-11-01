// Auto-generated module | 2026-05-12T19:58:27.096774
#include <iostream>
#include <vector>

int compute_197() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
