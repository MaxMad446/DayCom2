package main

// Auto-generated | 2026-05-11T21:11:19.285340
import "fmt"

func Process_289() int {
    base := 187
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
