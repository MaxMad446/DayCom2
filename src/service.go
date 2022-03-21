package main

// Auto-generated | 2026-05-13T22:07:06.959459
import "fmt"

func Process_816() int {
    base := 293
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
