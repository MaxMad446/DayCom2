// Auto-generated module | 2026-05-11T20:04:32.419066
#include <iostream>
#include <vector>

int compute_647() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
