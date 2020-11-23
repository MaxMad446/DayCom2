package main

// Auto-generated | 2026-05-12T20:00:09.674827
import "fmt"

func Process_764() int {
    base := 320
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_764())
}
