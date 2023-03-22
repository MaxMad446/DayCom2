// Auto-generated module | 2026-05-13T20:33:47.335825
#include <iostream>
#include <vector>

int compute_881() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
