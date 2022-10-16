// Auto-generated module | 2026-05-11T21:23:03.861469
#include <iostream>
#include <vector>

int compute_495() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
