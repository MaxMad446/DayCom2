// Auto-generated module | 2026-05-12T04:15:35.065146
#include <iostream>
#include <vector>

int compute_716() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
