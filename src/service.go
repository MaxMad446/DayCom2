package main

// Auto-generated | 2026-05-14T06:11:49.673282
import "fmt"

func Process_893() int {
    base := 349
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
