// Auto-generated module | 2026-05-14T06:26:42.435450
#include <iostream>
#include <vector>

int compute_273() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
