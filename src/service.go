package main

// Auto-generated | 2026-05-13T20:29:44.455546
import "fmt"

func Process_979() int {
    base := 162
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_979())
}
