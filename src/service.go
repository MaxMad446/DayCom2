package main

// Auto-generated | 2026-05-12T21:04:03.047611
import "fmt"

func Process_373() int {
    base := 483
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_373())
}
