// Auto-generated module | 2026-05-13T20:55:21.928100
#include <iostream>
#include <vector>

int compute_627() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
