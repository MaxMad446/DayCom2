// Auto-generated module | 2026-05-13T22:12:10.249050
#include <iostream>
#include <vector>

int compute_243() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
