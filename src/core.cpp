// Auto-generated module | 2026-05-14T06:22:58.428740
#include <iostream>
#include <vector>

int compute_745() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
