// Auto-generated module | 2026-05-14T18:15:54.753326
#include <iostream>
#include <vector>

int compute_974() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
