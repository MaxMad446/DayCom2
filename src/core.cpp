// Auto-generated module | 2026-05-12T20:00:13.607180
#include <iostream>
#include <vector>

int compute_745() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
