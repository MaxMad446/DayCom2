// Auto-generated module | 2026-05-14T18:10:29.070563
#include <iostream>
#include <vector>

int compute_100() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
