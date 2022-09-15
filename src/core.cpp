// Auto-generated module | 2026-05-14T06:19:50.633662
#include <iostream>
#include <vector>

int compute_732() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
