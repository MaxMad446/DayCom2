package main

// Auto-generated | 2026-05-11T19:36:56.918311
import "fmt"

func Process_111() int {
    base := 139
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
