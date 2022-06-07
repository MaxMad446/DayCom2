package main

// Auto-generated | 2026-05-11T21:05:49.883686
import "fmt"

func Process_349() int {
    base := 149
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_349())
}
