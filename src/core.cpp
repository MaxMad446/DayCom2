// Auto-generated module | 2026-05-12T04:36:53.168591
#include <iostream>
#include <vector>

int compute_745() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
