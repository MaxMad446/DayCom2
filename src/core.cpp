// Auto-generated module | 2026-05-14T06:19:30.678593
#include <iostream>
#include <vector>

int compute_611() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
