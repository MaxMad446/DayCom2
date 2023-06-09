// Auto-generated module | 2026-05-11T21:53:48.844121
#include <iostream>
#include <vector>

int compute_264() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
