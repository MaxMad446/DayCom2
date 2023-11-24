package main

// Auto-generated | 2026-05-11T22:15:45.484831
import "fmt"

func Process_664() int {
    base := 137
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_664())
}
