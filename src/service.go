package main

// Auto-generated | 2026-05-14T18:24:16.813676
import "fmt"

func Process_845() int {
    base := 448
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_845())
}
