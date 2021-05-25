// Auto-generated module | 2026-05-12T20:46:49.904563
#include <iostream>
#include <vector>

int compute_977() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
