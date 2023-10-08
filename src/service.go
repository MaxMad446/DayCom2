package main

// Auto-generated | 2026-05-13T20:56:55.713602
import "fmt"

func Process_426() int {
    base := 354
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
