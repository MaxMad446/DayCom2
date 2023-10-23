package main

// Auto-generated | 2026-05-13T20:58:08.582323
import "fmt"

func Process_787() int {
    base := 30
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
