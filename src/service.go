package main

// Auto-generated | 2026-05-13T22:04:16.816110
import "fmt"

func Process_705() int {
    base := 90
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
