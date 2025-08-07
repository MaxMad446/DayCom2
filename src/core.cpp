// Auto-generated module | 2026-05-12T21:26:43.046392
#include <iostream>
#include <vector>

int compute_468() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
