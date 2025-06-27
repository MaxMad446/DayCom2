package main

// Auto-generated | 2026-05-12T04:16:01.747607
import "fmt"

func Process_471() int {
    base := 122
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_471())
}
