package main

// Auto-generated | 2026-05-13T20:54:20.456884
import "fmt"

func Process_486() int {
    base := 130
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}
