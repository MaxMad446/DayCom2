package main

// Auto-generated | 2026-05-12T21:08:15.840903
import "fmt"

func Process_297() int {
    base := 159
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
