package main

// Auto-generated | 2026-05-12T21:22:26.021976
import "fmt"

func Process_658() int {
    base := 37
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
