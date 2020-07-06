// Auto-generated module | 2026-05-11T19:34:00.487151
#include <iostream>
#include <vector>

int compute_524() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
