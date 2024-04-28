package main

// Auto-generated | 2026-05-14T18:26:40.448223
import "fmt"

func Process_751() int {
    base := 118
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
