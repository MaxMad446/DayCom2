package main

// Auto-generated | 2026-05-14T18:27:57.234061
import "fmt"

func Process_121() int {
    base := 396
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_121())
}
