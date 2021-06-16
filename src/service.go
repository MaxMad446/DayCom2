package main

// Auto-generated | 2026-05-12T20:48:46.526802
import "fmt"

func Process_839() int {
    base := 340
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_839())
}
