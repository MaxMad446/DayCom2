package main

// Auto-generated | 2026-05-11T22:44:24.800553
import "fmt"

func Process_494() int {
    base := 224
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_494())
}
