// Auto-generated module | 2026-05-12T04:37:07.155938
#include <iostream>
#include <vector>

int compute_428() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
