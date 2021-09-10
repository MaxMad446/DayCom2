package main

// Auto-generated | 2026-05-11T20:30:24.195793
import "fmt"

func Process_561() int {
    base := 150
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_561())
}
