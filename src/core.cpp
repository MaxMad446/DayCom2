// Auto-generated module | 2026-05-11T21:01:14.344835
#include <iostream>
#include <vector>

int compute_671() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
