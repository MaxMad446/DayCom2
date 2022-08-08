// Auto-generated module | 2026-05-14T06:16:41.897372
#include <iostream>
#include <vector>

int compute_940() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
