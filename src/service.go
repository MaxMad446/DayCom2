package main

// Auto-generated | 2026-05-12T21:39:39.857627
import "fmt"

func Process_594() int {
    base := 47
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
