package main

// Auto-generated | 2026-05-12T21:26:37.177758
import "fmt"

func Process_169() int {
    base := 305
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
