// Auto-generated module | 2026-05-11T20:00:19.165468
#include <iostream>
#include <vector>

int compute_337() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
