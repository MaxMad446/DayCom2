package main

// Auto-generated | 2026-05-11T20:49:50.577506
import "fmt"

func Process_760() int {
    base := 83
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
