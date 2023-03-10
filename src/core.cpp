// Auto-generated module | 2026-05-11T21:41:51.484467
#include <iostream>
#include <vector>

int compute_748() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
