package main

// Auto-generated | 2026-05-11T19:38:22.953096
import "fmt"

func Process_367() int {
    base := 169
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_367())
}
