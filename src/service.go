package main

// Auto-generated | 2026-05-12T20:50:38.527002
import "fmt"

func Process_706() int {
    base := 254
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
