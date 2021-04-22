// Auto-generated module | 2026-05-11T20:11:45.292040
#include <iostream>
#include <vector>

int compute_667() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
