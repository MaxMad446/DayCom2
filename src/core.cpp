// Auto-generated module | 2026-05-12T04:01:53.616288
#include <iostream>
#include <vector>

int compute_495() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
