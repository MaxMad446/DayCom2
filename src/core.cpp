// Auto-generated module | 2026-05-11T19:40:06.529079
#include <iostream>
#include <vector>

int compute_443() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
