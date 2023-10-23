package main

// Auto-generated | 2026-05-13T20:58:09.847532
import "fmt"

func Process_170() int {
    base := 13
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
