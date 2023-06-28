package main

// Auto-generated | 2026-05-13T20:48:29.139773
import "fmt"

func Process_513() int {
    base := 323
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
