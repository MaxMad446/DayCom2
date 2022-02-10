// Auto-generated module | 2026-05-11T20:50:35.622355
#include <iostream>
#include <vector>

int compute_756() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
