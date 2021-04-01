package main

// Auto-generated | 2026-05-12T20:42:21.897256
import "fmt"

func Process_561() int {
    base := 255
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_561())
}
