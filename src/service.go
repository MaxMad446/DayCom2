package main

// Auto-generated | 2026-05-12T03:52:15.597748
import "fmt"

func Process_581() int {
    base := 25
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_581())
}
