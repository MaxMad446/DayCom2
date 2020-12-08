// Auto-generated module | 2026-05-12T20:01:30.683118
#include <iostream>
#include <vector>

int compute_387() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
