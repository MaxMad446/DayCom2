// Auto-generated module | 2026-05-12T04:20:00.529450
#include <iostream>
#include <vector>

int compute_491() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
