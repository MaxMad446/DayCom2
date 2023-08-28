package main

// Auto-generated | 2026-05-11T22:04:06.755123
import "fmt"

func Process_345() int {
    base := 180
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
