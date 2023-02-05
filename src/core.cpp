// Auto-generated module | 2026-05-13T20:29:54.210519
#include <iostream>
#include <vector>

int compute_745() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
