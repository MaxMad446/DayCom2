// Auto-generated module | 2026-05-12T20:00:53.358157
#include <iostream>
#include <vector>

int compute_618() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
