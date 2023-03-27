package main

// Auto-generated | 2026-05-13T20:34:12.886564
import "fmt"

func Process_317() int {
    base := 109
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_317())
}
