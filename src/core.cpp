// Auto-generated module | 2026-05-11T20:56:24.691690
#include <iostream>
#include <vector>

int compute_471() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
