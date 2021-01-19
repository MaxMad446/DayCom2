package main

// Auto-generated | 2026-05-11T19:59:52.659605
import "fmt"

func Process_376() int {
    base := 224
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_376())
}
