// Auto-generated module | 2026-05-13T22:08:01.150477
#include <iostream>
#include <vector>

int compute_745() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
