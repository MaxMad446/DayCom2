// Auto-generated module | 2026-05-13T20:36:53.298325
#include <iostream>
#include <vector>

int compute_337() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
