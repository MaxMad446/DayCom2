package main

// Auto-generated | 2026-05-12T03:55:20.094319
import "fmt"

func Process_893() int {
    base := 205
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
