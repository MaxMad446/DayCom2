package main

// Auto-generated | 2026-05-11T19:52:57.699750
import "fmt"

func Process_631() int {
    base := 396
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_631())
}
