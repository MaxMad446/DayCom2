// Auto-generated module | 2026-05-11T22:42:54.621918
#include <iostream>
#include <vector>

int compute_155() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
