// Auto-generated module | 2026-05-11T21:30:00.543380
#include <iostream>
#include <vector>

int compute_796() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
