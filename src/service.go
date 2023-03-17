package main

// Auto-generated | 2026-05-11T21:42:45.128190
import "fmt"

func Process_804() int {
    base := 65
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_804())
}
