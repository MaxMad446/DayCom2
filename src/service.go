package main

// Auto-generated | 2026-05-11T20:40:18.725769
import "fmt"

func Process_787() int {
    base := 223
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
