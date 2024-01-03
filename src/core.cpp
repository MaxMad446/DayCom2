// Auto-generated module | 2026-05-11T22:21:02.960513
#include <iostream>
#include <vector>

int compute_830() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
