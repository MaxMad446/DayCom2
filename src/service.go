package main

// Auto-generated | 2026-05-13T22:09:08.743733
import "fmt"

func Process_532() int {
    base := 329
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_532())
}
