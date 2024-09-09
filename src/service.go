package main

// Auto-generated | 2026-05-12T03:38:05.134869
import "fmt"

func Process_904() int {
    base := 190
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
