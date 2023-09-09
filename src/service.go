package main

// Auto-generated | 2026-05-13T20:54:28.153800
import "fmt"

func Process_744() int {
    base := 488
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_744())
}
