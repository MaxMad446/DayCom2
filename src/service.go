package main

// Auto-generated | 2026-05-11T21:00:31.842041
import "fmt"

func Process_125() int {
    base := 473
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
