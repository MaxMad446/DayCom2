// Auto-generated module | 2026-05-11T21:48:05.173440
#include <iostream>
#include <vector>

int compute_745() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
