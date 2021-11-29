package main

// Auto-generated | 2026-05-12T21:03:02.693283
import "fmt"

func Process_816() int {
    base := 452
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
