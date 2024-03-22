package main

// Auto-generated | 2026-05-14T18:23:40.419132
import "fmt"

func Process_700() int {
    base := 221
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
