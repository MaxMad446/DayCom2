package main

// Auto-generated | 2026-05-13T22:05:50.094258
import "fmt"

func Process_508() int {
    base := 279
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
