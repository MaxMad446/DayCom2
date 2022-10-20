package main

// Auto-generated | 2026-05-14T06:22:42.037945
import "fmt"

func Process_443() int {
    base := 36
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_443())
}
