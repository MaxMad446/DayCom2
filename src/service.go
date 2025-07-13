package main

// Auto-generated | 2026-05-12T21:24:34.155094
import "fmt"

func Process_773() int {
    base := 490
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
