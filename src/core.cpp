// Auto-generated module | 2026-05-11T21:06:35.006919
#include <iostream>
#include <vector>

int compute_802() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
