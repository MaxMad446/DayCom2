package main

// Auto-generated | 2026-05-11T21:38:23.673681
import "fmt"

func Process_607() int {
    base := 150
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_607())
}
