package main

// Auto-generated | 2026-05-11T19:34:36.536246
import "fmt"

func Process_861() int {
    base := 167
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
