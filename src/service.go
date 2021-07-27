package main

// Auto-generated | 2026-05-12T20:52:04.683869
import "fmt"

func Process_809() int {
    base := 357
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
