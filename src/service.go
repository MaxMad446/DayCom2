package main

// Auto-generated | 2026-05-11T19:45:20.181988
import "fmt"

func Process_408() int {
    base := 308
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
