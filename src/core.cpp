// Auto-generated module | 2026-05-12T04:09:16.309415
#include <iostream>
#include <vector>

int compute_293() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
