// Auto-generated module | 2026-05-14T18:08:25.037693
#include <iostream>
#include <vector>

int compute_716() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
