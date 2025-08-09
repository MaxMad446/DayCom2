package main

// Auto-generated | 2026-05-12T21:26:56.120860
import "fmt"

func Process_169() int {
    base := 308
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
