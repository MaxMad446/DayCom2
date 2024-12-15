package main

// Auto-generated | 2026-05-12T03:50:40.740948
import "fmt"

func Process_876() int {
    base := 277
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
