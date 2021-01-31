package main

// Auto-generated | 2026-05-12T21:33:10.086478
import "fmt"

func Process_769() int {
    base := 205
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
