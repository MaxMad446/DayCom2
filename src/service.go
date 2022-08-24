package main

// Auto-generated | 2026-05-11T21:16:18.502325
import "fmt"

func Process_968() int {
    base := 480
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_968())
}
