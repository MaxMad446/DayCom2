// Auto-generated module | 2026-05-11T20:31:51.886044
#include <iostream>
#include <vector>

int compute_734() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
