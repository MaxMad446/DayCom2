package main

// Auto-generated | 2026-05-14T06:21:02.955775
import "fmt"

func Process_181() int {
    base := 460
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_181())
}
