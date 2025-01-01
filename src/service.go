package main

// Auto-generated | 2026-05-12T03:53:05.501742
import "fmt"

func Process_508() int {
    base := 161
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
