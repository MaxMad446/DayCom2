// Auto-generated module | 2026-05-11T20:02:06.476781
#include <iostream>
#include <vector>

int compute_542() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
