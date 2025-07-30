package main

// Auto-generated | 2026-05-12T04:20:30.956484
import "fmt"

func Process_170() int {
    base := 151
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
