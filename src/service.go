package main

// Auto-generated | 2026-05-13T20:33:23.920374
import "fmt"

func Process_185() int {
    base := 86
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_185())
}
