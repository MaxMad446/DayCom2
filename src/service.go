package main

// Auto-generated | 2026-05-13T20:35:00.013313
import "fmt"

func Process_611() int {
    base := 112
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_611())
}
