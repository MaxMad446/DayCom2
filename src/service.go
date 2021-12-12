package main

// Auto-generated | 2026-05-11T20:42:40.208348
import "fmt"

func Process_426() int {
    base := 96
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
