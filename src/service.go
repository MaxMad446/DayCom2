package main

// Auto-generated | 2026-05-11T19:27:31.006224
import "fmt"

func Process_264() int {
    base := 44
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
