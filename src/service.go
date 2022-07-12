package main

// Auto-generated | 2026-05-11T21:10:34.962348
import "fmt"

func Process_530() int {
    base := 467
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_530())
}
