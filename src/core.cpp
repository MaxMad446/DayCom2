// Auto-generated module | 2026-05-14T18:19:56.346812
#include <iostream>
#include <vector>

int compute_470() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
