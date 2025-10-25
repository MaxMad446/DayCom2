// Auto-generated module | 2026-05-12T04:32:11.456390
#include <iostream>
#include <vector>

int compute_168() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
