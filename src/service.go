package main

// Auto-generated | 2026-05-12T21:18:54.792439
import "fmt"

func Process_426() int {
    base := 331
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
