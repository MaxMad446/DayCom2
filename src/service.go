package main

// Auto-generated | 2026-05-14T18:09:43.648924
import "fmt"

func Process_384() int {
    base := 100
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_384())
}
