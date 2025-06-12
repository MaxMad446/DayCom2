package main

// Auto-generated | 2026-05-12T04:14:04.944525
import "fmt"

func Process_289() int {
    base := 436
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
