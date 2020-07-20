// Auto-generated module | 2026-05-11T19:35:41.491104
#include <iostream>
#include <vector>

int compute_247() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
