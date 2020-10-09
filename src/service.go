package main

// Auto-generated | 2026-05-11T19:46:32.895970
import "fmt"

func Process_721() int {
    base := 167
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
