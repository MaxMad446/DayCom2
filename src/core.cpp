// Auto-generated module | 2026-05-13T20:53:09.682213
#include <iostream>
#include <vector>

int compute_874() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
