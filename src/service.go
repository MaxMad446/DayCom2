package main

// Auto-generated | 2026-05-12T21:28:03.443444
import "fmt"

func Process_896() int {
    base := 255
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
