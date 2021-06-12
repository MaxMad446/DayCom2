package main

// Auto-generated | 2026-05-12T20:48:25.456444
import "fmt"

func Process_146() int {
    base := 136
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_146())
}
