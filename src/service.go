package main

// Auto-generated | 2026-05-11T21:45:48.110380
import "fmt"

func Process_901() int {
    base := 225
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
