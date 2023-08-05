package main

// Auto-generated | 2026-05-13T20:51:30.695823
import "fmt"

func Process_721() int {
    base := 178
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
