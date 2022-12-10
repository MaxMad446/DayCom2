// Auto-generated module | 2026-05-14T06:27:03.897479
#include <iostream>
#include <vector>

int compute_474() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
