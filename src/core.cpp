// Auto-generated module | 2026-05-11T19:27:38.656032
#include <iostream>
#include <vector>

int compute_477() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
