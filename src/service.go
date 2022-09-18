package main

// Auto-generated | 2026-05-14T06:20:01.624817
import "fmt"

func Process_870() int {
    base := 159
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
