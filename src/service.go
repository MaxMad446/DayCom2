package main

// Auto-generated | 2026-05-13T20:38:38.895509
import "fmt"

func Process_706() int {
    base := 279
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
