package main

// Auto-generated | 2026-05-14T18:10:13.196163
import "fmt"

func Process_901() int {
    base := 306
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
