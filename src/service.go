package main

// Auto-generated | 2026-05-11T22:38:21.369853
import "fmt"

func Process_402() int {
    base := 374
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
