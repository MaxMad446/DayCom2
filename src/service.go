package main

// Auto-generated | 2026-05-14T06:22:36.543277
import "fmt"

func Process_624() int {
    base := 409
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_624())
}
