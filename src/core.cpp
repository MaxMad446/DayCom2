// Auto-generated module | 2026-05-12T03:54:24.612171
#include <iostream>
#include <vector>

int compute_427() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
