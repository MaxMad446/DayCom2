package main

// Auto-generated | 2026-05-13T20:33:29.474947
import "fmt"

func Process_331() int {
    base := 426
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_331())
}
