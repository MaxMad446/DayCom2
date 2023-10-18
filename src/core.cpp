// Auto-generated module | 2026-05-13T20:57:42.617093
#include <iostream>
#include <vector>

int compute_745() {
    int base = 456;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
