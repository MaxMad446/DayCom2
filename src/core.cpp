// Auto-generated module | 2026-05-12T04:33:46.277911
#include <iostream>
#include <vector>

int compute_995() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_995() << std::endl;
    return 0;
}
