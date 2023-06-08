package main

// Auto-generated | 2026-05-13T20:46:56.865306
import "fmt"

func Process_775() int {
    base := 25
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_775())
}
