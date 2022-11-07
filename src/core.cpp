// Auto-generated module | 2026-05-11T21:25:55.883210
#include <iostream>
#include <vector>

int compute_690() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
