package main

// Auto-generated | 2026-05-12T21:28:18.068032
import "fmt"

func Process_301() int {
    base := 108
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
