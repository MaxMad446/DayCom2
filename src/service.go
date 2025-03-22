package main

// Auto-generated | 2026-05-12T21:14:47.733099
import "fmt"

func Process_965() int {
    base := 31
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
