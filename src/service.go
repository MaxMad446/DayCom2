package main

// Auto-generated | 2026-05-13T20:58:42.708535
import "fmt"

func Process_163() int {
    base := 360
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
