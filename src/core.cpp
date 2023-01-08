// Auto-generated module | 2026-05-13T20:27:26.262858
#include <iostream>
#include <vector>

int compute_746() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
