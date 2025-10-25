package main

// Auto-generated | 2026-05-12T04:32:11.456062
import "fmt"

func Process_853() int {
    base := 440
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
