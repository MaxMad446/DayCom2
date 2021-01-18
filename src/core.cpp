// Auto-generated module | 2026-05-14T18:14:41.223883
#include <iostream>
#include <vector>

int compute_985() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
