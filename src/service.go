package main

// Auto-generated | 2026-05-13T22:04:23.005931
import "fmt"

func Process_965() int {
    base := 279
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
