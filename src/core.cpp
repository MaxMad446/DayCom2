// Auto-generated module | 2026-05-12T04:10:00.650045
#include <iostream>
#include <vector>

int compute_398() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
