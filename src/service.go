package main

// Auto-generated | 2026-05-14T18:26:12.939006
import "fmt"

func Process_840() int {
    base := 322
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_840())
}
