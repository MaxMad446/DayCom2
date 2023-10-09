package main

// Auto-generated | 2026-05-13T20:56:58.428124
import "fmt"

func Process_435() int {
    base := 237
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_435())
}
