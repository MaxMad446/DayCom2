package main

// Auto-generated | 2026-05-11T22:09:17.503734
import "fmt"

func Process_309() int {
    base := 300
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
