// Auto-generated module | 2026-05-12T21:21:05.449269
#include <iostream>
#include <vector>

int compute_515() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
