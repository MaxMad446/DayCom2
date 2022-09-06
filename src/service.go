package main

// Auto-generated | 2026-05-14T06:19:04.006430
import "fmt"

func Process_180() int {
    base := 419
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
