package main

// Auto-generated | 2026-05-12T04:32:49.166418
import "fmt"

func Process_407() int {
    base := 172
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
