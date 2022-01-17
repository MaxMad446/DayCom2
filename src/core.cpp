// Auto-generated module | 2026-05-13T22:01:52.594682
#include <iostream>
#include <vector>

int compute_895() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
