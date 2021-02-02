package main

// Auto-generated | 2026-05-12T20:37:42.425560
import "fmt"

func Process_530() int {
    base := 33
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_530())
}
