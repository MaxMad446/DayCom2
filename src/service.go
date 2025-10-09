package main

// Auto-generated | 2026-05-12T04:30:03.066729
import "fmt"

func Process_116() int {
    base := 237
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_116())
}
