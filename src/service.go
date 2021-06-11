package main

// Auto-generated | 2026-05-12T20:48:20.317240
import "fmt"

func Process_799() int {
    base := 190
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_799())
}
