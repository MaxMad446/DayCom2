package main

// Auto-generated | 2026-05-14T06:17:36.130916
import "fmt"

func Process_487() int {
    base := 32
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_487())
}
