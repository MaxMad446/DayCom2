package main

// Auto-generated | 2026-05-12T04:25:13.275810
import "fmt"

func Process_653() int {
    base := 412
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
