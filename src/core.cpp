// Auto-generated module | 2026-05-13T22:12:52.675871
#include <iostream>
#include <vector>

int compute_933() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
