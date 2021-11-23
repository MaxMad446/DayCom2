package main

// Auto-generated | 2026-05-12T21:02:23.158363
import "fmt"

func Process_997() int {
    base := 68
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_997())
}
