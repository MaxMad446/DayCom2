package main

// Auto-generated | 2026-05-14T06:15:36.465387
import "fmt"

func Process_770() int {
    base := 263
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_770())
}
