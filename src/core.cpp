// Auto-generated module | 2026-05-12T20:49:30.601181
#include <iostream>
#include <vector>

int compute_270() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
