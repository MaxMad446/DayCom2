// Auto-generated module | 2026-05-11T22:03:51.276402
#include <iostream>
#include <vector>

int compute_343() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
