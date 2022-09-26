package main

// Auto-generated | 2026-05-11T21:20:31.235195
import "fmt"

func Process_551() int {
    base := 269
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
