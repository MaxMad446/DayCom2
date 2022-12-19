// Auto-generated module | 2026-05-14T06:27:47.482502
#include <iostream>
#include <vector>

int compute_396() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
