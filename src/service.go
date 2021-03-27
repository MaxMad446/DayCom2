package main

// Auto-generated | 2026-05-11T20:08:28.248763
import "fmt"

func Process_524() int {
    base := 201
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_524())
}
