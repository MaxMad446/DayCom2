package main

// Auto-generated | 2026-05-12T21:10:38.193292
import "fmt"

func Process_370() int {
    base := 299
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
