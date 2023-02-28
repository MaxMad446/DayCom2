package main

// Auto-generated | 2026-05-13T20:31:51.604547
import "fmt"

func Process_487() int {
    base := 350
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_487())
}
