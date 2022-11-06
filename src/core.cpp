// Auto-generated module | 2026-05-11T21:25:45.580438
#include <iostream>
#include <vector>

int compute_107() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
