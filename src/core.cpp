// Auto-generated module | 2026-05-12T21:21:00.797929
#include <iostream>
#include <vector>

int compute_652() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
