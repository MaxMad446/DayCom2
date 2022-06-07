// Auto-generated module | 2026-05-14T06:11:43.576844
#include <iostream>
#include <vector>

int compute_802() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
