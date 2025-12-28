// Auto-generated module | 2026-05-12T04:40:52.713818
#include <iostream>
#include <vector>

int compute_618() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
