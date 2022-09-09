// Auto-generated module | 2026-05-14T06:19:16.657938
#include <iostream>
#include <vector>

int compute_596() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
