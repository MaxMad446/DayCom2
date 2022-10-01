// Auto-generated module | 2026-05-11T21:21:12.663991
#include <iostream>
#include <vector>

int compute_771() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
