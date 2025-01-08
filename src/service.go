package main

// Auto-generated | 2026-05-12T03:54:00.576170
import "fmt"

func Process_918() int {
    base := 272
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_918())
}
