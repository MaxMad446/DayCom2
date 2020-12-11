package main

// Auto-generated | 2026-05-14T18:09:45.374746
import "fmt"

func Process_631() int {
    base := 208
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_631())
}
