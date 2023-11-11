package main

// Auto-generated | 2026-05-13T20:59:43.625859
import "fmt"

func Process_800() int {
    base := 408
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_800())
}
