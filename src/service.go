package main

// Auto-generated | 2026-05-11T22:44:21.548224
import "fmt"

func Process_595() int {
    base := 102
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
