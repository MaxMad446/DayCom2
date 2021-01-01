package main

// Auto-generated | 2026-05-12T20:35:09.496924
import "fmt"

func Process_311() int {
    base := 352
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
