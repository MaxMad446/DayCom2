// Auto-generated module | 2026-05-13T20:27:56.759949
#include <iostream>
#include <vector>

int compute_491() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
