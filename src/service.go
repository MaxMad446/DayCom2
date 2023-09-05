package main

// Auto-generated | 2026-05-13T20:54:08.967141
import "fmt"

func Process_742() int {
    base := 337
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_742())
}
