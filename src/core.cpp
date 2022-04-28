// Auto-generated module | 2026-05-11T21:00:30.152859
#include <iostream>
#include <vector>

int compute_769() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
