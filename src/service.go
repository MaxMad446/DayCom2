package main

// Auto-generated | 2026-05-11T20:41:25.757928
import "fmt"

func Process_809() int {
    base := 137
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
