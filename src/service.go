package main

// Auto-generated | 2026-05-11T19:33:37.481948
import "fmt"

func Process_787() int {
    base := 259
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
