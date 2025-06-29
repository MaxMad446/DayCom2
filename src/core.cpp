// Auto-generated module | 2026-05-12T04:16:17.749501
#include <iostream>
#include <vector>

int compute_109() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
