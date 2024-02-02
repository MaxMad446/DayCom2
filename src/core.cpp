// Auto-generated module | 2026-05-14T18:19:52.099850
#include <iostream>
#include <vector>

int compute_760() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
