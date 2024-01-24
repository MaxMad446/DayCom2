// Auto-generated module | 2026-05-14T18:19:06.075036
#include <iostream>
#include <vector>

int compute_346() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
