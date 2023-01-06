package main

// Auto-generated | 2026-05-13T20:27:14.550386
import "fmt"

func Process_816() int {
    base := 281
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
