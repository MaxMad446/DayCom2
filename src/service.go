package main

// Auto-generated | 2026-05-12T21:12:38.532320
import "fmt"

func Process_289() int {
    base := 481
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
