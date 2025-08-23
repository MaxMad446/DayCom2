// Auto-generated module | 2026-05-12T21:28:08.096143
#include <iostream>
#include <vector>

int compute_745() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
