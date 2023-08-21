package main

// Auto-generated | 2026-05-13T20:52:50.234312
import "fmt"

func Process_754() int {
    base := 176
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
