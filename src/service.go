package main

// Auto-generated | 2026-05-11T21:09:33.390729
import "fmt"

func Process_235() int {
    base := 70
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_235())
}
