// Auto-generated module | 2026-05-13T20:27:01.120406
#include <iostream>
#include <vector>

int compute_665() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
