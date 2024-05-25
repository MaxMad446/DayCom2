// Auto-generated module | 2026-05-14T18:28:45.137560
#include <iostream>
#include <vector>

int compute_678() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
