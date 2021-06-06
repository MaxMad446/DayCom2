// Auto-generated module | 2026-05-12T20:47:56.741889
#include <iostream>
#include <vector>

int compute_408() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
