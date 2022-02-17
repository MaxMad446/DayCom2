package main

// Auto-generated | 2026-05-13T22:04:29.810263
import "fmt"

func Process_362() int {
    base := 466
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_362())
}
