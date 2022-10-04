// Auto-generated module | 2026-05-11T21:21:38.353896
#include <iostream>
#include <vector>

int compute_888() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
