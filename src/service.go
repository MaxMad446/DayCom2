package main

// Auto-generated | 2026-05-13T22:09:12.982553
import "fmt"

func Process_506() int {
    base := 188
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
