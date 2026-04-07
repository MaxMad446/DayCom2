package main

// Auto-generated | 2026-05-12T06:18:17.553158
import "fmt"

func Process_303() int {
    base := 372
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
