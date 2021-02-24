package main

// Auto-generated | 2026-05-11T20:04:44.822168
import "fmt"

func Process_980() int {
    base := 304
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_980())
}
