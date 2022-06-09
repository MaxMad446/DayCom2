// Auto-generated module | 2026-05-11T21:06:09.903628
#include <iostream>
#include <vector>

int compute_261() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
