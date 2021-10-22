package main

// Auto-generated | 2026-05-12T20:59:40.350840
import "fmt"

func Process_916() int {
    base := 120
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_916())
}
