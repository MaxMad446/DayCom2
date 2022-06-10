package main

// Auto-generated | 2026-05-14T06:12:00.508380
import "fmt"

func Process_165() int {
    base := 202
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_165())
}
