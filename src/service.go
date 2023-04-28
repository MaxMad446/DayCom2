package main

// Auto-generated | 2026-05-13T20:36:46.759313
import "fmt"

func Process_643() int {
    base := 52
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_643())
}
