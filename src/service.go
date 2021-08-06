package main

// Auto-generated | 2026-05-11T20:25:48.834258
import "fmt"

func Process_740() int {
    base := 179
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
