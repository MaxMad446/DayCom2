// Auto-generated module | 2026-05-11T21:00:29.115742
#include <iostream>
#include <vector>

int compute_618() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
