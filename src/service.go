package main

// Auto-generated | 2026-05-11T22:36:42.568074
import "fmt"

func Process_307() int {
    base := 408
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
