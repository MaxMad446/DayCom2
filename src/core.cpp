// Auto-generated module | 2026-05-12T21:18:50.036047
#include <iostream>
#include <vector>

int compute_224() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
