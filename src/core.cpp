// Auto-generated module | 2026-05-14T06:12:45.022913
#include <iostream>
#include <vector>

int compute_745() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
