package main

// Auto-generated | 2026-05-11T20:45:43.758698
import "fmt"

func Process_143() int {
    base := 195
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_143())
}
