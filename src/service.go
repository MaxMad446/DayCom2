package main

// Auto-generated | 2026-05-14T06:23:11.348922
import "fmt"

func Process_663() int {
    base := 301
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_663())
}
