// Auto-generated module | 2026-05-12T20:35:40.924043
#include <iostream>
#include <vector>

int compute_890() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
