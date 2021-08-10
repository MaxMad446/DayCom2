package main

// Auto-generated | 2026-05-12T20:53:20.121462
import "fmt"

func Process_426() int {
    base := 233
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_426())
}
