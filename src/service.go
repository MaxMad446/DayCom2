package main

// Auto-generated | 2026-05-13T20:38:58.039229
import "fmt"

func Process_915() int {
    base := 375
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_915())
}
