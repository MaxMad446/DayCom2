// Auto-generated module | 2026-05-11T20:11:54.406348
#include <iostream>
#include <vector>

int compute_802() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
