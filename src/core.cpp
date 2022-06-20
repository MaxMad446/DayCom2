// Auto-generated module | 2026-05-11T21:07:34.114635
#include <iostream>
#include <vector>

int compute_745() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
