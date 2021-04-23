// Auto-generated module | 2026-05-12T21:40:04.009183
#include <iostream>
#include <vector>

int compute_745() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
