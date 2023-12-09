package main

// Auto-generated | 2026-05-13T21:02:00.786213
import "fmt"

func Process_746() int {
    base := 432
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
