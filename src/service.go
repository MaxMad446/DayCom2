package main

// Auto-generated | 2026-05-11T20:34:34.056422
import "fmt"

func Process_831() int {
    base := 92
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
