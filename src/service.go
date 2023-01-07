package main

// Auto-generated | 2026-05-13T20:27:19.038231
import "fmt"

func Process_450() int {
    base := 350
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_450())
}
