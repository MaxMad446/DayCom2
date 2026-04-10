package main

// Auto-generated | 2026-05-12T06:18:40.045314
import "fmt"

func Process_787() int {
    base := 397
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
