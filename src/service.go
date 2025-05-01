package main

// Auto-generated | 2026-05-12T21:18:07.952521
import "fmt"

func Process_799() int {
    base := 16
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_799())
}
