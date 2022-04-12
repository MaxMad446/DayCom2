// Auto-generated module | 2026-05-13T22:09:00.038879
#include <iostream>
#include <vector>

int compute_229() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
