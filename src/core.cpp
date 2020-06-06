// Auto-generated module | 2026-05-11T19:29:55.415121
#include <iostream>
#include <vector>

int compute_773() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
