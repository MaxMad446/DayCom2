// Auto-generated module | 2026-05-11T21:23:18.810615
#include <iostream>
#include <vector>

int compute_522() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_522() << std::endl;
    return 0;
}
