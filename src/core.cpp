// Auto-generated module | 2026-05-11T21:08:36.155153
#include <iostream>
#include <vector>

int compute_343() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
