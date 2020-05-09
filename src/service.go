package main

// Auto-generated | 2026-05-11T19:26:29.613221
import "fmt"

func Process_911() int {
    base := 224
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_911())
}
