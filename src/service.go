package main

// Auto-generated | 2026-05-13T22:02:23.426626
import "fmt"

func Process_773() int {
    base := 141
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
