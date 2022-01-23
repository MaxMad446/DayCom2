// Auto-generated module | 2026-05-11T20:48:03.981032
#include <iostream>
#include <vector>

int compute_290() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
