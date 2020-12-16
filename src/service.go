package main

// Auto-generated | 2026-05-14T18:10:26.070318
import "fmt"

func Process_129() int {
    base := 259
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
