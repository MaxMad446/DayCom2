// Auto-generated module | 2026-05-11T22:33:50.733933
#include <iostream>
#include <vector>

int compute_745() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
