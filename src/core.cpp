// Auto-generated module | 2026-05-12T21:14:40.377151
#include <iostream>
#include <vector>

int compute_224() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
