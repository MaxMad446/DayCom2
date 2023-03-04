package main

// Auto-generated | 2026-05-13T20:32:10.949487
import "fmt"

func Process_510() int {
    base := 405
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_510())
}
