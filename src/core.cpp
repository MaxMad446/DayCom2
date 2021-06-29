// Auto-generated module | 2026-05-11T20:20:46.246345
#include <iostream>
#include <vector>

int compute_745() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
