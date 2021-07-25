// Auto-generated module | 2026-05-11T20:24:15.335559
#include <iostream>
#include <vector>

int compute_767() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
