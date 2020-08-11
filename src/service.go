package main

// Auto-generated | 2026-05-11T19:38:39.382590
import "fmt"

func Process_787() int {
    base := 150
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
