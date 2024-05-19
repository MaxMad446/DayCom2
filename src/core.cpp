// Auto-generated module | 2026-05-11T22:39:07.601757
#include <iostream>
#include <vector>

int compute_120() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
