package main

// Auto-generated | 2026-05-14T06:15:16.961158
import "fmt"

func Process_530() int {
    base := 75
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_530())
}
