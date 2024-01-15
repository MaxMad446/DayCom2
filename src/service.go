package main

// Auto-generated | 2026-05-11T22:22:36.426486
import "fmt"

func Process_788() int {
    base := 37
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_788())
}
