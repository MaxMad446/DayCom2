package main

// Auto-generated | 2026-05-13T20:54:46.898807
import "fmt"

func Process_450() int {
    base := 133
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_450())
}
