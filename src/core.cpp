// Auto-generated module | 2026-05-12T04:13:47.237051
#include <iostream>
#include <vector>

int compute_191() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
