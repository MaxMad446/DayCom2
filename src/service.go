package main

// Auto-generated | 2026-05-12T21:08:44.637345
import "fmt"

func Process_792() int {
    base := 359
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
