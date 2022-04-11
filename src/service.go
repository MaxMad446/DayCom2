package main

// Auto-generated | 2026-05-13T22:08:55.901599
import "fmt"

func Process_371() int {
    base := 191
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_371())
}
