// Auto-generated module | 2026-05-11T21:31:06.643241
#include <iostream>
#include <vector>

int compute_393() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
