// Auto-generated module | 2026-05-12T04:21:11.250659
#include <iostream>
#include <vector>

int compute_745() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
