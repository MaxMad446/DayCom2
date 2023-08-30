package main

// Auto-generated | 2026-05-11T22:04:24.834259
import "fmt"

func Process_490() int {
    base := 338
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
