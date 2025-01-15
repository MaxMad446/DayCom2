package main

// Auto-generated | 2026-05-12T21:09:11.314484
import "fmt"

func Process_596() int {
    base := 343
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_596())
}
