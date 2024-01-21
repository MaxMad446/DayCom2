// Auto-generated module | 2026-05-14T18:18:51.291451
#include <iostream>
#include <vector>

int compute_745() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
