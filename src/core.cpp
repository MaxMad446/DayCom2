// Auto-generated module | 2026-05-14T18:12:19.768450
#include <iostream>
#include <vector>

int compute_559() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
