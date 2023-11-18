package main

// Auto-generated | 2026-05-11T22:14:58.931689
import "fmt"

func Process_708() int {
    base := 256
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
