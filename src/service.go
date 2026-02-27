package main

// Auto-generated | 2026-05-12T04:49:15.758182
import "fmt"

func Process_169() int {
    base := 274
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
