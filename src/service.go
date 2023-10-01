package main

// Auto-generated | 2026-05-11T22:08:43.925366
import "fmt"

func Process_721() int {
    base := 401
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
