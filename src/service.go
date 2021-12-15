package main

// Auto-generated | 2026-05-12T21:04:18.417193
import "fmt"

func Process_113() int {
    base := 78
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}
