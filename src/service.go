package main

// Auto-generated | 2026-05-12T21:12:48.608457
import "fmt"

func Process_792() int {
    base := 211
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
