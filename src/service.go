package main

// Auto-generated | 2026-05-14T06:16:43.934241
import "fmt"

func Process_916() int {
    base := 345
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_916())
}
