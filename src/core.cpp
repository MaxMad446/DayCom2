// Auto-generated module | 2026-05-12T03:42:52.283575
#include <iostream>
#include <vector>

int compute_343() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
