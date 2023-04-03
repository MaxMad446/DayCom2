package main

// Auto-generated | 2026-05-13T20:34:45.162269
import "fmt"

func Process_460() int {
    base := 319
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
