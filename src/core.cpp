// Auto-generated module | 2026-05-11T20:52:19.846032
#include <iostream>
#include <vector>

int compute_673() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
