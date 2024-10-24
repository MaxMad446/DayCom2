package main

// Auto-generated | 2026-05-12T03:43:55.430224
import "fmt"

func Process_467() int {
    base := 440
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_467())
}
