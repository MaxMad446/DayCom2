// Auto-generated module | 2026-05-13T22:00:52.507308
#include <iostream>
#include <vector>

int compute_722() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
