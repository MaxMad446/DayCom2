// Auto-generated module | 2026-05-12T03:49:09.077677
#include <iostream>
#include <vector>

int compute_745() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
