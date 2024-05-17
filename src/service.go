package main

// Auto-generated | 2026-05-14T18:28:12.122254
import "fmt"

func Process_530() int {
    base := 357
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_530())
}
