package main

// Auto-generated | 2026-05-11T21:28:31.653724
import "fmt"

func Process_775() int {
    base := 200
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_775())
}
