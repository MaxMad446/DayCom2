package main

// Auto-generated | 2026-05-14T18:22:02.464250
import "fmt"

func Process_750() int {
    base := 251
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
