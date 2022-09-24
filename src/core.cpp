// Auto-generated module | 2026-05-11T21:20:18.478772
#include <iostream>
#include <vector>

int compute_955() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
