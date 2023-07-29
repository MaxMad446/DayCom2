// Auto-generated module | 2026-05-11T22:00:17.433168
#include <iostream>
#include <vector>

int compute_892() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
