// Auto-generated module | 2026-05-13T21:00:39.325170
#include <iostream>
#include <vector>

int compute_141() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
