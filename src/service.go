package main

// Auto-generated | 2026-05-11T21:18:32.771816
import "fmt"

func Process_497() int {
    base := 228
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_497())
}
