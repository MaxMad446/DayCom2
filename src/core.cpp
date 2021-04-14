// Auto-generated module | 2026-05-12T21:39:21.464287
#include <iostream>
#include <vector>

int compute_327() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
