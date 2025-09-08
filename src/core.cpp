// Auto-generated module | 2026-05-12T04:25:55.117127
#include <iostream>
#include <vector>

int compute_250() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
