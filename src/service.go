package main

// Auto-generated | 2026-05-13T22:08:07.493839
import "fmt"

func Process_425() int {
    base := 240
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_425())
}
