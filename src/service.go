package main

// Auto-generated | 2026-05-11T21:26:10.695765
import "fmt"

func Process_311() int {
    base := 281
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
