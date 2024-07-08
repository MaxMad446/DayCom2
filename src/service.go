package main

// Auto-generated | 2026-05-11T22:45:31.464399
import "fmt"

func Process_426() int {
    base := 32
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
