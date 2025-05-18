package main

// Auto-generated | 2026-05-12T04:11:03.085012
import "fmt"

func Process_222() int {
    base := 470
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_222())
}
