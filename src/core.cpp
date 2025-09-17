// Auto-generated module | 2026-05-12T04:27:04.134343
#include <iostream>
#include <vector>

int compute_931() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
