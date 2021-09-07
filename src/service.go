package main

// Auto-generated | 2026-05-12T20:55:51.619645
import "fmt"

func Process_787() int {
    base := 480
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
