package main

// Auto-generated | 2026-05-11T21:00:01.445144
import "fmt"

func Process_530() int {
    base := 37
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_530())
}
