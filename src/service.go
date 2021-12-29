package main

// Auto-generated | 2026-05-12T21:05:23.326654
import "fmt"

func Process_816() int {
    base := 50
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
