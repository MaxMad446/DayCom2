// Auto-generated module | 2026-05-11T22:08:40.745710
#include <iostream>
#include <vector>

int compute_371() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
